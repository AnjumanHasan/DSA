class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool flag=true;
        if(nums.size()<2)
        {
            return;
        }
        int index;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                index=i;
                flag=false;
                break;
            }
        }
        int index2;
        if(!flag)
        {
        int temp=INT_MAX;
        for(int i=index+1;i<nums.size();i++)
        {
            if(nums[i]>nums[index] && nums[i]<temp)
            {
                index2=i;
                temp=nums[i];
            }
        }
        swap(nums[index2],nums[index]);
        sort(nums.begin()+index+1,nums.end());
        }
        else if(flag)
        {
            sort(nums.begin(),nums.end());
        }
    }
};