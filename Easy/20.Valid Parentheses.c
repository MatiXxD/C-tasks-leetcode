//Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
//An input string is valid if:
//Open brackets must be closed by the same type of brackets.
//Open brackets must be closed in the correct order.

#include <string.h>

bool isValid(char* s){

    char bracketArr[4096];
    int i = 0;

    if(!(strlen(s) % 2)){
        while(*s){

            if(*s == '(' || *s == '[' || *s == '{'){
                bracketArr[i] = *s;
                i++;
            }
            else if (i != 0){
                switch(*s){
                case ')':
                    if(bracketArr[i-1] != '(') return false;
                    break;

                case ']':
                    if(bracketArr[i-1] != '[') return false;
                    break;

                case '}':
                    if(bracketArr[i-1] != '{') return false;
                    break;
                }
                i--;
            }
            else
                return false;

            s++;

        }

        return i == 0;

    }

    return false;

}
