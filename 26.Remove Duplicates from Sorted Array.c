//Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.
//Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums.
//More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

int removeDuplicates(int* nums, int numsSize){

    int i = 0;
    int dups = 0;
    for(int j = 1 ; j < numsSize ; j++){

        if(nums[i] == nums[j])
            dups++;
        else
            nums[++i] = nums[j];

    }

    return numsSize - dups;

}
