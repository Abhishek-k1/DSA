class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int Sum = n*(n+1)/2;
        int realSum = 0;
        for(int i = 0; i< nums.size(); i++)
        {
            realSum += nums[i];
        }
        return Sum - realSum;
    }
};