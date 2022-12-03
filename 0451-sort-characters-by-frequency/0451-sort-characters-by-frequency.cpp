class Solution {
public:
    string frequencySort(string s) {
        
        map<char,int> m;
        string st="";
        for(auto ch : s)
        {
            m[ch]++;
            
        }
        
        vector<pair<int,char>> v;
        
        for(auto it: m)
        {
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end());
        
        for(int i=v.size()-1;i>=0;i--)
        {
            int count=v[i].first;
            while(count)
            {
                st+=v[i].second;
                count--;
            }
        }
        return st;
    }
};