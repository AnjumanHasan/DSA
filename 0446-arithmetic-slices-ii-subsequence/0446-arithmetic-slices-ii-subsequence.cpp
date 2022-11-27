using lli = long long int;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& a) {
        int n = a.size();
        vector <unordered_map<lli, int>> dp(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                lli d = (lli)a[i] - (lli)a[j];
                if (dp[j].find(d) != dp[j].end()) {
                    dp[i][d] += dp[j][d]; 
                }
                dp[i][d]++;
            }
        }
        int ans = 0; 
        for (int i = 0; i < n; i++) {
            for (auto it = dp[i].begin(); it != dp[i].end(); ++it) {
                ans += it->second;
            }
        }
        return ans - (n*(n-1))/2; 
    }
};