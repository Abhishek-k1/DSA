// Given the integer day denoting the day number, print on the screen which day of the week it is. Week starts from Monday and for values greater than 7 or less than 1, print Invalid.
// Ensure only the 1st letter of the answer is capitalised
//
// Example 1
// Input: day = 3
// Output: Wednesday
//
// Example 2
// Input: day = 8
// Output: Invalid

// Time Complexity: O(1)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

class Solution
{
public:
    // Function to print the day of the week
    void whichWeekDay(int day)
    {
        // Check the value of day using switch-case
        switch (day)
        {

        // If day is 1, print Monday
        case 1:
            cout << "Monday";
            break;

        // If day is 2, print Tuesday
        case 2:
            cout << "Tuesday";
            break;

        // If day is 3, print Wednesday
        case 3:
            cout << "Wednesday";
            break;

        // If day is 4, print Thursday
        case 4:
            cout << "Thursday";
            break;

        // If day is 5, print Friday
        case 5:
            cout << "Friday";
            break;

        // If day is 6, print Saturday
        case 6:
            cout << "Saturday";
            break;

        // If day is 7, print Sunday
        case 7:
            cout << "Sunday";
            break;

        // If day is not between 1 and 7
        default:
            cout << "Invalid";
        }
    }
};

int main()
{
    // Variable to store the day number
    int day;

    // Take day number as input
    cin >> day;

    // Create an object of Solution
    Solution obj;

    // Call the function and pass the day
    obj.whichWeekDay(day);

    return 0;
}