// Given two binary strings a and b, return their sum as a binary string.

#include <stdlib.h>
#include <string.h>

char * addBinary(char * a, char * b){

    int lenA = strlen(a);
    int lenB = strlen(b);
    int size = (lenA > lenB ? lenA : lenB) + 1;

    char* binSum = (char*)malloc((size+1)*sizeof(char));
    binSum[size] = '\0';

    int sum = 0;
    while(lenA > 0 || lenB > 0 || sum > 0){
        if(lenA > 0){
            sum += a[lenA-1] - '0';
            lenA--;
        }
        if(lenB > 0){
            sum += b[lenB-1] - '0';
            lenB--;
        }
        binSum[size-- - 1] = '0' + sum % 2;
        sum /= 2;
    }

    return binSum + size;

}
