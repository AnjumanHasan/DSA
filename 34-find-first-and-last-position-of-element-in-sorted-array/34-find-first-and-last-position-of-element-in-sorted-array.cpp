class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=0,last=0,mid;
        int n=nums.size();
        int hi=n-1,lo=0;
        bool flag=0;
        vector<int> ans={-1,-1};
        
        for(int i=0;i<n;i++)
        {
            mid=lo+(hi-lo)/2;
            if(nums[mid]==target)
            {
                flag=1;
                break;
            }
            else if(nums[mid]>target)
            {
                hi=mid-1;
            }
            else
            {
                lo=mid+1;
            }
        }
        if(!flag)
        {
            return ans;
        }
        else
        {
                first=mid;
                last=mid;
           while(last<n && nums[last]==target)
           {
               last++;
           }
            while(first>=0 && nums[first]==target)
           {
               first--;
           }
        }
        ans[0]=first+1;
        ans[1]=last-1;
        return ans;
    }
};