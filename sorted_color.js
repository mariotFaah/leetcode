/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
// Leetcode 75 izy ity
// ity solution tyh dia bubble sort tsianjery masiso androany tontolo XD
var sortColors = function(nums) {
    let n = nums.length;
    for(let i=0; i<n; i++){
        for(let j=0; j<n-i-1;j++){
            let temp;
            if(nums[j]>nums[j+1]){
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
};
