class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0,rem;
        int y=x;
        while(y>0)
        {
            rem=y%10;
            rev=rev*10+rem;
            y=y/10;
        }
        if(rev==x)
        {
            return true;
        }
        return false;
    }
};