/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArray(int* nums, int numsSize, int* returnSize) {
    for(int i=0; i<numsSize; i++){
        for(int j=0; j<numsSize-i-1;j++){
            int temp;
            if(nums[j]>nums[j+1]){
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
     *returnSize = numsSize;
    return nums;
}
