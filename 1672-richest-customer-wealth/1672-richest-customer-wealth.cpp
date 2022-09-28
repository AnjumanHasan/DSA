class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int n=accounts.size(); 
        int maxi=INT_MIN,sum=0;
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                sum+=accounts[i][j];
            }
            maxi=max(sum,maxi);
        }
        return maxi;
        
    }
};