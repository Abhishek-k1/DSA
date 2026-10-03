class Solution {
public:
    void pattern13(int n) {
        int number = 1;
    for(int i = 0; i< n; i++)
    {
      for(int j = 1; j <= i + 1; j++)
      {
        cout << number++ << " ";
      }
      cout << endl;
    }
    }
};