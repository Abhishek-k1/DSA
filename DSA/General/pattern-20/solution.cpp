class Solution {
public:
    void pattern20(int n) {
    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for(int k = 0; k < 2*n - 2 - 2*i; k++)
        {
            cout << " ";
        }
        for(int l = 0; l < i + 1; l++)
        {
            cout << "*";
        }
        cout << endl;
        }

        for(int i = 0; i < n - 1; i++)
        {
            for(int j = 0; j < n - 1 - i; j++)
            {
                cout << "*";
            }
            for(int k = 0; k < 2 + 2*i; k++)
            {
                cout  << " ";
            }
            for(int l = 0; l < n - 1 - i; l++)
            {
                cout << "*";
            }
            cout << endl;
    }
    }
};