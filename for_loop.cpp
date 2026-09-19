// Given two integers low and high, return the sum of all integers from low to high inclusive

// Example 1
// Input: low = 1, high = 5
// Output: 15
// Explanation: 1 + 2 + 3 + 4 + 5 = 15

// Example 2
// Input: low = 3, high = 7
// Output: 25
// Explanation: 3 + 4 + 5 + 6 + 7 = 25

// Approach:
// 1. Initialize sum as 0
// 2. Run a loop from low to high
// 3. Add each number to sum
// 4. Return the final sum

// Time Complexity: O(n)
// Space Complexity: O(1)


#include <iostream>
using namespace std;

class Solution
{
public:
    int forLoop(int low, int high)
    {
        // Your code goes here
        int sum = 0;
        for (int i = low; i <= high; i++)
        {
            sum = sum + i;
        }
        return sum;
    }
};

int main()
{
    int low;
    int high;

    cin >> low;
    cin >> high;

    Solution obj;

    cout << obj.forLoop(low, high);

    return 0;
}