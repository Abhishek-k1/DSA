class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        if (nums.empty()) {
            return;
        }
        k = k % nums.size();
        vector<int> temp;
        for(int i = 0; i < k; i++)  {
            temp.push_back(nums[i]);
        }

        for(int i = 0; i < nums.size() - k; i++) {
            nums[i] = nums[i + k];
        }

        for(int i = 0; i < k; i++)
        {
            nums[nums.size() - k + i] = temp[i];
        }

    }
};