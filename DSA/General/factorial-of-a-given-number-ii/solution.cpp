class Solution{	
	public:
		long long int factorial(int n){
			long long int fact = 1;
            for(int i = 2; i <= n; i++)
            {
                fact = fact * i;
            }
            return fact;
		}
};