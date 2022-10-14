class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.length()==1)
        {
            return "";
        }
        bool flag=true;
        for(int i=0;i<palindrome.size()/2;i++)
        {
            if(palindrome[i]!='a')
            {
                palindrome[i]='a';
                flag=false;
                break;
            }
        }
        if(flag)
        {
            palindrome[palindrome.size()-1]='b';
        }
            
        return palindrome;
    }
};