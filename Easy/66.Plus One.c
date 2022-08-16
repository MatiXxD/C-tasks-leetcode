// You are given a large integer represented as an integer array digits,
// where each digits[i] is the ith digit of the integer.
// The digits are ordered from most significant to least significant in left-to-right order.
// The large integer does not contain any leading 0's.
// Increment the large integer by one and return the resulting array of digits.


#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize){

    int *arr = malloc(100 * sizeof(int));
    unsigned c = 0;

    digits[digitsSize - 1]++;
    for(int i = digitsSize - 1 ; i > 0 ; i--)
        if(digits[i] >= 10){
            digits[i] %= 10;
            digits[i-1]++;
        }

    int start = 0;
    if(digits[0] < 10){
        *returnSize = digitsSize;
    }
    else{
        arr[0] = 1;
        digits[0] %= 10;
        *returnSize = digitsSize + 1;
        start = 1;
    }
    for(int i = 0 ; i < digitsSize ; i++)
        arr[start+i] = digits[i];


    return arr;


}
