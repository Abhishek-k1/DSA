class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
    for(int i = 1; i < nums.size(); i++) {
        int key = nums[i];
        int j = i;

        while (j > 0 && nums[j - 1] > key) {
            nums[j] = nums[j - 1];
            j--;
        }
        nums[j] = key;
    }
    return nums;
    }
};
