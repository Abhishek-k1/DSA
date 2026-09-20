// Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d
//
// A number ends with digit d if its last digit is d
// Example 1
// Input: d = 1
// Output: 12300

// Explanation:
// The first 50 positive integers ending with 1 are: 1, 11, 21, 31, ..., 491
// Their sum is 12300

// Example 2
// Input: d = 5
// Output: 12500

// Approach:
// 1. Start from d, because d is the first positive integer ending with digit d
// 2. Use a counter to generate exactly 50 numbers
// 3. Add the current number to sum
// 4. Increase the number by 10 to get the next number ending with d
// 5. Increase the counter by 1
// 6. Return the final sum

// Time Complexity: O(1)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

class Solution
{
public:
    int whileLoop(int d)
    {
        int i = d;
        int count = 1;
        int sum = 0;

        while (count <= 50)
        {
            sum = sum + i;

            i = i + 10;

            count = count + 1;
        }
        return sum;
    }
};

int main()
{

    int d;

    cin >> d;

    Solution obj;

    cout << obj.whileLoop(d);

    return 0;
}