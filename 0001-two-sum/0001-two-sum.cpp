class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        vector<int> v;
        map <int,int> map;
        for(i=0;i<nums.size();i++)
        {
          map.insert({nums[i],i});
        }
        for(i=0;i<nums.size();i++)
        {
          if(map.count(target-nums[i]))
          {
              v.push_back(i);
              v.push_back(map[target-nums[i]]);
              if(i==map[target-nums[i]])
              {
                  v.pop_back();
                  v.pop_back();
                  continue;
              }
              else
              break;
          }
        }
        return v;
    }
};