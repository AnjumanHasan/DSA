class Solution {
public:
    
        string makeGood(string s) {
        if(s.size()==1)
        {
            return s;
        }
        string str="";
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(abs(st.top()-s[i])==32)
            {
                st.pop();
                continue;
            }
            else
            {
                st.push(s[i]);
            }
        }
            if(st.empty())
            {
                return "";
            }
            while(!st.empty())
        {
               str+=st.top();
                st.pop();
        }
            reverse(str.begin(),str.end());
        return str;
    }
};