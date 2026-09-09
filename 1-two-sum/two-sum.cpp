// Leetcode #1 - Two Sum
//
// Approach:
// Check every possible pair of numbers and return their indices
// When their sum is equal to the target
//
// Steps:
// 1. Start with the first element
// 2. Compare it with every element after it
// 3. Check whether numa[i] + nums[j] == target
// 4. If the sum equals target, return the two indices
//
// Time Complexity: O(n²) 
// Space Complexity: O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

    // Check every possible pair
    for(int i = 0; i < nums.size(); i++)
    {
      // Start from the element after 1
      for(int j = i + 1; j < nums.size(); j++)
      {

        // check whether the pair gives the target
        if(nums[i] + nums[j] == target)
        {
            
          // Return the indices of the pair
          return{i, j};
        }
    }
    }
    return {};
    }
};
