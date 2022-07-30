class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        char a;
       long long int x=0;
        if(columnTitle.length()==1)
        {
             a=columnTitle[0];
             x=a-64;
            return x;
        }
       for(int i=0;i<columnTitle.length();i++)
       {
           a=columnTitle[i];
           x=x*26+a-64;
       }
        return x;
    }
};