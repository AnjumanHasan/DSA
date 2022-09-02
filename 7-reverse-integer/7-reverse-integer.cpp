class Solution {
public:
    int reverse(int x) {
        bool flag=false;
        if(x<0)
        {
            x=abs(x);
           flag=true; 
        }
        
        long long rev=0;
        int rem;
        while(x>0)
        {
          rem=x%10;
            x=x/10;
            rev=rev*10+rem;
        }
        if(rev>INT_MAX||rev<INT_MIN)
        {
            return 0;
        }
        if(flag)
        {
            
            return -rev;
        }
        return rev;
    }
};