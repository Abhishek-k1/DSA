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
