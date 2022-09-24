class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<3)
        {
            return n;
        }
        int index=2;
        for(int i=2;i<n;i++)
        {
            if(nums[i]!=nums[index-2])
            {
                nums[index]=nums[i];
                index++;
            }
        }
        return index;
    }
};