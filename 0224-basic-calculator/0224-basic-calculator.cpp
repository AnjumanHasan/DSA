class Solution {
public:
    int calculate(string s) {
      int num=0,result=0,sign=1;
        stack<int> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                num=num*10+(s[i]-'0');
            }
            else if(s[i]=='+')
            {
                result+=sign*num;
                sign=1;
                num=0;
            }
            else if(s[i]=='-')
            {
                result+=sign*num;
                sign=-1;
                num=0;
            }
            else if(s[i]=='(')
            {
                st.push(result);
                st.push(sign);
                num=0;
                result=0;
                sign=1;
            }
            else if(s[i]==')')
            {
                result+=num*sign;
                num=0;
                int stack_sign=st.top();
                st.pop();
                int prev_result=st.top();
                st.pop();
                result*=stack_sign;
                result+=prev_result;
            }
            
        }
        result+=num*sign;
        return result;
    }
};