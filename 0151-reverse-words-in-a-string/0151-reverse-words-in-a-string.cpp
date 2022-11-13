class Solution {
public:
    string reverseWords(string s) {
       vector<string> v;
        string str="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=32)
            {
                str+=s[i];
            }
            
             if(s[i]==32 && str.size()!=0)
            {
                    v.push_back(str);
                    str="";   
            }

        }
       
        if(str!="")
        {
         v.push_back(str);   
        }

        str="";
        reverse(v.begin(),v.end());
        
        for(int i=0;i<v.size();i++)
        {
               str+=v[i]+' '; 

        }
        str.erase(str.end()-1);
        return str;
    }
};