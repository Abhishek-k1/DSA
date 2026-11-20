class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        if (nums.size() < 2) {
            return -1;
        }

        int largest = nums[0];
        int secondLargest;
        bool foundSecond = false;

        for(int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > largest) {
                secondLargest = largest;
                largest = nums[i];
                foundSecond = true;
            }
            else if (nums[i] < largest && (!foundSecond || nums[i] > secondLargest)) {
                secondLargest = nums[i];
                foundSecond = true;
            }
        }
            if (foundSecond)  {
                return secondLargest;
            }

           return -1;
      
    }
};