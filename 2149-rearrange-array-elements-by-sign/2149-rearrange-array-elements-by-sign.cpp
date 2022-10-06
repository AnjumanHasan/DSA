class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0,neg=1;
        vector<int> nums1(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                nums1[pos]=nums[i];
                pos+=2;
            }
            if(nums[i]<0)
            {
                nums1[neg]=nums[i];
                neg+=2;
            }
        }
        return nums1;
    }
};