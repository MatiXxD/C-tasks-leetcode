//Implement strStr().
//Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

int strStr(char * haystack, char * needle){

    int res = 0;
    int size = strlen(haystack) - strlen(needle);

    if(strlen(needle) == 0)
        return 0;
    if(size < 0)
        return -1;

    for(int i = 0 ; i < size + 1 ; i++){

        res = 1;
        for(int j = 0 ; j < strlen(needle) ; j++)
            if(haystack[i+j] != needle[j]){

                res = 0;
                break;

            }

        if(res == 1)
            return i;

    }

    return -1;

}

///////////////////EASY WAY//////////////////////////////
// if(strlen(needle) == 0)
//   return 0;
//
// char* s = strstr(haystack, needle);
//
// f(s == NULL)
//  return -1;
// else
//  return strlen(haystack) - strlen(s);
