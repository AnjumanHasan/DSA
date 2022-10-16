class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        int count =0;
        int maxCount=INT_MIN;
        if(nums.size()==0)
        {
            return 0;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            
            if(!s.count(nums[i]-1))
            {
                int ele=nums[i];
                count=1;
                while(s.count(ele+1))
                {
                    ele+=1;
                    count++;
                }
                maxCount=max(count,maxCount);
            }
        }
     
        return maxCount;
    }
};