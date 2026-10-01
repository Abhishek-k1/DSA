class Solution {
public:
    void pattern8(int n) {
    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for(int j = 1; j <=  (2*n - 1) - 2*i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    }
};