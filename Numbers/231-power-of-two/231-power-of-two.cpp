class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
        {
            return true;
        }
        if(n==0)
        {
            return 0;
        }
        long long x=0,num=0;
        while(num!=n)
        {
            if(num>n)
            {
                return false;
            }
            num=pow(2,x);
            x++;
        }
        return true;
    }
};