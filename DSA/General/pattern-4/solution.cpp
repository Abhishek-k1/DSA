class Solution {
public:
    void pattern4(int n) {
    for(int i = 0;  i < n; i++)
    {
        for(int j = 1; j <= i + 1; j++)
        {
            cout <<  i + 1;
        }
        cout << endl;
    }
    }
};