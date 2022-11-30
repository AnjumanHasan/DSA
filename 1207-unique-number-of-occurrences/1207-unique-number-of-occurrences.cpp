class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        set<int> freq;
        for(auto it : m)
        {
            if(freq.find(it.second)!=freq.end())
            {
                return false;
            }
            freq.insert(it.second);
        }
        return true;
    }
};