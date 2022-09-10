class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
       long long int l=0,r=0;
        long long int ans=0,total=0;
        sort(nums.begin(),nums.end());
        for(r=0;r<nums.size();r++)
        {
            total+=nums[r];
            while(nums[r]*(r-l+1)>total+k)
            {
                total-=nums[l];
                l++;
            }
           ans=max(ans,r-l+1);
        }
        return ans;
    }
};