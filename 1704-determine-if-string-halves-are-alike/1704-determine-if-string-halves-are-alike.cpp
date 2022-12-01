class Solution {
public:
    
    bool isVowel(char a)
    {
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||
           a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        {
            return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        
        int c1=0,c2=0;
        int i=0,j=s.length()/2;
        
        while(j<s.length())
        {
            if(isVowel(s[i]))
            {
                c1++;
        
            }
            if(isVowel(s[j]))
            {
                c2++;
             
            }
            i++;
            j++;
        }
      return c1==c2;  
    }
};