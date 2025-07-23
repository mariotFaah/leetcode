'''
Binary search comme d'hab
'''

class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums) -1
        while left <= right:
            middle = (left+right)//2
            if target == nums[middle]:
                return middle
            else if target > nums[middle]:
                left = middle + 1
            else:
                right = middle - 1
        return left

