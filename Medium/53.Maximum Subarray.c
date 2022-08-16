// Given an integer array nums, find the contiguous subarray (containing at least one number)
// which has the largest sum and return its sum.
// A subarray is a contiguous part of an array.

int maxSubArray(int* nums, int numsSize){

    int max = nums[0];
    int sum = 0;

    for(int i = 0 ; i < numsSize ; i++){

        sum += nums[i];
        if(sum > max)
            max = sum;
        if (sum < 0)
            sum = 0;

    }

    return max;

}
