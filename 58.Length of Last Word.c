// Given a string s consisting of some words separated by some number of spaces, return the length of the last word in the string.
// A word is a maximal substring consisting of non-space characters only.

#include <string.h>

int lengthOfLastWord(char* s){

    int count = 0;
    int pos = strlen(s) - 1;

    while(s[pos] == ' ')
        pos--;

    for(int i = pos ; i >= 0 ; i--){

        if(s[i] != ' ')
            count++;

        else
            i = -1;

    }

    return count;

}
