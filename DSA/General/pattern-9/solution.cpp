class Solution {
public:
    void pattern9(int n) {
    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < n - i -1; k++)
        {
            cout << " ";           
        }
        for(int j = 1;  j <= 2*i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
        for(int i = 0; i < n; i++)
        {
        for(int l = 0; l < i; l++)
        {
            cout << " ";
        }
        for(int m = 1; m <= (2*n - 1) - 2*i; m++)
        {
            cout << "*";
        }
        cout << endl;
    
    }
    }
};