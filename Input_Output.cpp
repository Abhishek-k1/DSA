// Complete the function printNumber which takes an integer input
// from the user and prints it on the screen

// Example 1
// Input(user gives value): 7
//  Output: 7

// Example 2
// Input(user gives value): -5
// Output: -5

// Approach:
// 1.Declare an integer variable
// 2.Take an integer input using cin
// 3.Print the integer using cout

// Time Complexity: O(1)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

class Solution
{
public:
    void printNumber()
    {
        int number;

        // Take integer input from the user
        cin >> number;

        // Print the entered integer
        cout << number;
    }
};

int main()
{
    // Create an object of Solution
    Solution obj;

    // Call the printNumber function
    obj.printNumber();

    return 0;
}
