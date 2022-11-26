class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int a,b,c;
        int lo,hi;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i==0 ||(i>0 && nums[i]!=nums[i-1]))
            {
            a=nums[i];
            lo=i+1;
            hi=nums.size()-1;
            
            while(lo<hi)
            {
                if(nums[lo]+nums[hi]==(0-a))
                {
                    b=nums[lo];
                    c=nums[hi];
                    vector<int> v;
                    v.push_back(b);
                    v.push_back(c);
                    v.push_back(a);
                    ans.push_back(v); 
                    while(lo<hi && nums[lo]==nums[lo+1])
                    {
                        lo++;
                    }
                    while(lo<hi && nums[hi]==nums[hi-1])
                    {
                        hi--;
                    }
                   lo++;
                    hi--;
                }
                else if(nums[lo]+nums[hi]<(0-a)){
                    lo++;
                }
                else
                {
                    hi--;
                }
            }   
            }

        }
        return ans;
    }
};