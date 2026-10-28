class Solution{	
	public:
		int arraySum(vector<int>& nums){
		return helper(nums, 0);
		}
        private:
         int helper(vector<int>& nums, int i) {
            if(i == nums.size()) {
                return 0;
            }
            return nums[i] + helper(nums, i+1);
         }
};