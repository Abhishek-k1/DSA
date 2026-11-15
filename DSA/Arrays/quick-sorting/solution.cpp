class Solution {
public:
    vector<int> quickSort(vector<int>& nums) {

    int low = 0;
    int high = nums.size() - 1;

    quickSort(nums, low, high);
    return nums;
    }
    void quickSort(vector<int>& nums, int low, int high) {

    if (low >= high) return;

    int p = partition(nums, low, high);

    quickSort(nums, low, p - 1);
    quickSort(nums, p + 1, high);
}
    int partition(vector<int>& nums, int low, int high) {
        int pivot = nums[high];
        int i = low - 1;

        for(int j = low; j < high; j++)
        {
            if (nums[j] <= pivot) {
                i++;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i + 1], nums[high]);
        return i + 1;
    }
};
