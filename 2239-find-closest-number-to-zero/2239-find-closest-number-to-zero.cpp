class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {

           if(abs(nums[i])<abs(mini))
           {
                mini=nums[i];
           }
            else if(abs(nums[i])==abs(mini))
               {
                   mini=max(nums[i],mini);
               }
        }
        return mini;
    }
};