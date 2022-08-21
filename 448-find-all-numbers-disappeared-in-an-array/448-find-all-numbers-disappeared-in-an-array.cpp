class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int> mp;
        vector<int> nums1;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=1;i<=nums.size();i++)
        {
           
            if(mp.count(i)==0)
            {
                nums1.push_back(i);
            }
        }
        return nums1;
    }
};