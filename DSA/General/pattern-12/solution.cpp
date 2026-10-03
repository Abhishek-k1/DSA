class Solution {
public:
    void pattern12(int n) {
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        for(int m = 0; m < n*2 - 2 - 2*i; m++)
        { 
            cout << " ";
        }
        for(int k = i + 1; k >= 1; k--)
        {
        cout << k;
    }
        cout << endl;
    }
    
    }
};