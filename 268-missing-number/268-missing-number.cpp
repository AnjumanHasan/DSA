class Solution {
public:
    int missingNumber(vector<int>& nums) {
       
          int sum=0,n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
           sum+=nums[i];
        }
        int rsum=n*(n+1)/2;

        return rsum-sum;
    }
};