class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        if(s==" ")
        {
            return true;
        }
        if(s.length()==1)
        {
            return true;
        }
        
        for(int i=0;i<s.length();i++)
        {
            
            if(s[i]>=65 && s[i]<=90)
            {
             temp+=s[i]+32;  
            }
            else if(s[i]>=97 && s[i]<=122)
            {
                temp+=s[i];
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                temp+=s[i];
            }
        }
    
        int start=0,end=temp.size()-1;
        
        // if(end==start)
        // {
        //     return true;
        // }
        while(end>start)
        {
            if(temp[start]!=temp[end])
            {
                return false;
            }
            end--;
            start++;
        }
        return true;
    }
};