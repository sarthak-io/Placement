class Solution(object):
    def twoSum(self, nums, target):
        # Use a dictionary to store the complement of each element
        complement_dict = {}

        for i, num in enumerate(nums):
            complement = target - num

            # Check if the complement is already in the dictionary
            if complement in complement_dict:
                # Return the indices of the two numbers that add up to the target
                return [complement_dict[complement], i]
            
            # Add the current number and its index to the dictionary
            complement_dict[num] = i

        # If no solution is found
        return None
class Solution(object):
    def twoSum(self, nums, target):
        n = len(nums)

        for i in range(n - 1):
            for j in range(i + 1, n):
                if nums[i] + nums[j] == target:
                    return [i, j]

        # If no solution is found
        return None
