class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        for(auto i:map)
        {
            if(i.second>floor(nums.size()/2))
            {
                max=i.first;
            }
        }
        return max;
    }
};