// Given a non-negative integer x, compute and return the square root of x.
// Since the return type is an integer, the decimal digits are truncated,
// and only the integer part of the result is returned.

int mySqrt(int x){

    int sqrtX;
    for(sqrtX = 0 ; (long)sqrtX*sqrtX <= x ; sqrtX++) continue;

    return sqrtX-1;

}
