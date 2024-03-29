// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n,
// representing the number of elements in nums1 and nums2 respectively.
// Merge nums1 and nums2 into a single array sorted in non-decreasing order.
// The final sorted array should not be returned by the function, but instead be stored inside the array nums1.
// To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged,
// and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){

    int i = m + n - 1;
    int n1 = m - 1;
    int n2 = n - 1;

    while(n1 >= 0 || n2 >= 0){
        if(n1 >= 0 && n2 >= 0){
            if(nums1[n1] > nums2[n2])
                nums1[i--] = nums1[n1--];
            else
                nums1[i--] = nums2[n2--];
        }
        else if(n1 < 0)
            nums1[i--] = nums2[n2--];
        else
            nums1[i--] = nums1[n1--];
    }

}
