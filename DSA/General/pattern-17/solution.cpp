class Solution {
public:
    void pattern17(int n) {
    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < n - i - 1; k++)
        {
            cout << " ";
        }
        for(int j = 0; j < 2*i + 1; j++)
        {
            if(j <= i)
            {
                cout << char('A' + j);
            }
            else
            {
                cout << char('A' + 2*i - j);
            }
        }
         cout << endl;
      }
    
    }
};