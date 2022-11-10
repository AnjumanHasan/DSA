class Solution {
public:
    string removeDuplicates(string s) {
        string str="";
        stack<char> st;
        
        for(int i=0;i<s.size();i++)
        {
            
            if(!st.empty() && st.top()==s[i])
            {
                st.pop();
                continue;
            }
            else
            {
                st.push(s[i]);
            }
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