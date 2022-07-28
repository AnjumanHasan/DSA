class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        map<char,int> m1,m2;
        for(auto it : s)
        {
            m1[it]++;
        }
        for(auto it : t)
        {
            m2[it]++;
        }
         for(auto it : s)
        {
            if(m1[it]!=m2[it])
            {
                return false;
            }
        }
        return true;
    }
};