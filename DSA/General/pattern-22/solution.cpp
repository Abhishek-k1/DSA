class Solution {
public:
    void pattern22(int n) {
    for(int i = 0; i < n*2 - 1; i++)
    {
        for(int j = 0 ; j < n*2 - 1; j++)
        {
           int distance = min(i, min(j, min(2*n - 2 - i, 2*n - 2 - j)));

            cout << n - distance << " ";
        }

        cout << endl;
    }
    }
};