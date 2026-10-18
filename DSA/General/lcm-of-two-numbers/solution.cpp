class Solution {
public:
    int LCM(int n1,int n2) {

    for(int i = 1; i <= n1 * n2; i++)
    {
        if(i % n1 == 0 &&  i % n2 == 0)
        {
        return i;
    }
    }
   
}

};