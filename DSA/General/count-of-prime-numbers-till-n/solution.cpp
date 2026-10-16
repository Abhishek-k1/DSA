class Solution {
public:
    int primeUptoN(int n) {
    int count = 0;
    for(int i = 2; i <= n; i++)\
    {
    int divisors = 0;

    for(int j = 1; j <= i; j++)
    {
    if(i % j == 0)
    {
        divisors++;
    }
    }
    if(divisors == 2)
    {
        count++;
    }
    }
    return count;
    }
};