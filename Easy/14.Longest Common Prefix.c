//Write a function to find the longest common prefix string amongst an array of strings.
//If there is no common prefix, return an empty string "".

#include <string.h>

char* longestCommonPrefix(char ** strs, int strsSize){

    int strNum = 1;
    char* prefix = strs[0];

    while(strNum < strsSize){

        for(int i = 0 ; i < strlen(prefix) ; i++)
            if(prefix[i] != strs[strNum][i]){
                prefix[i] = '\0';
                break;
            }

        strNum++;

    }

    return prefix;

}
