class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0,i=0;
        while(j<nums.size())
        {
            
            if(nums[i]==0&&nums[j]==0)
            {
                j++;
            }
            else
            {
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
        }
    }
};