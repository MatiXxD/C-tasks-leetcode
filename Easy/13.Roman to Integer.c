//Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
//For example, 2 is written as II in Roman numeral, just two one's added together.
//12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.
//Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII.
//Instead, the number four is written as IV. Because the one is before the five we subtract it making four.
//The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:
//I can be placed before V (5) and X (10) to make 4 and 9.
//X can be placed before L (50) and C (100) to make 40 and 90.
//C can be placed before D (500) and M (1000) to make 400 and 900.
//Given a roman numeral, convert it to an integer.

bool checkNextChar(char ch1, char ch2){

    switch(ch1){

    case 'I':
        return (ch2 == 'V' || ch2 == 'X') ? true : false;

    case 'X':
        return (ch2 == 'L' || ch2 == 'C') ? true : false;

    case 'C':
        return (ch2 == 'D' || ch2 == 'M') ? true : false;

    default:
        return false;

    }

}

int romanToInt(char* s){

    int res = 0;

    while(*s){

        switch(*s){

        case 'I':
            res += checkNextChar(*s, *(s+1)) == true ? -1 : 1;
            break;

        case 'V':
            res += 5;
            break;

        case 'X':
            res += checkNextChar(*s, *(s+1)) == true ? -10 : 10;
            break;

        case 'L':
            res += 50;
            break;

        case 'C':
            res += checkNextChar(*s, *(s+1)) == true ? -100 : 100;
            break;

        case 'D':
            res += 500;
            break;

        case 'M':
            res += 1000;
            break;

        default:
            res += 0;

        }

        s++;

    }

    return res;

}
