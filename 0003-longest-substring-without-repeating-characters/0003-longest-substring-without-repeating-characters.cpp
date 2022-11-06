class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int count=0,maxc=0;
        int l=0,r=0;

        while(r<s.size())
        {
            if(m.count(s[r])==0)
            {
                m[s[r]]=r;
                count++;
                r++;
            }
            else if(m.count(s[r]))
            {
                r=m[s[r]]+1;
                count=1;
                m.clear();
                m[s[r]]=r;

                r++;
            }
            maxc=max(count,maxc);
        }
        
        return maxc;
    }
};