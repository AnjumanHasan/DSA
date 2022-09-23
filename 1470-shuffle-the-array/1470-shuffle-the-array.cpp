class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> nums2;
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                nums2.push_back(nums[k]);
                k++;
            }
            else{
                nums2.push_back(nums[n]);
                n++;
            }
        }
        return nums2;
    }
};