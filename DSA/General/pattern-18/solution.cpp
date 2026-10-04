class Solution {
public:
    void pattern18(int n) {
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            cout << char('A' + n - 1 - i + j) << " ";
        }
         cout << endl;
    }
    }
};