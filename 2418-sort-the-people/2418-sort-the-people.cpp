class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string,greater<int>> mp;
        vector<string> ans;
        for(int i=0;i<names.size();i++)
        {
            mp.insert({heights[i],names[i]});
        }
        
        for(auto it:mp){
            string s=it.second;
            ans.push_back(s);
        }
        return ans;
    }
};