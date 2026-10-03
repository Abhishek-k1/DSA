class Solution {
public:
    void pattern14(int n) {
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            cout << char('A' + j);
        }
        cout << endl;
    }
    }
};