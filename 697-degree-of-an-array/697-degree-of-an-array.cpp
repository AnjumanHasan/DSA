class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        
        map<int,int> count,first,last;
        int len=nums.size();
        for(int i=0;i<len;i++)
        {
            if(first.count(nums[i])==0)
            {
                first[nums[i]]=i;
            }
            last[nums[i]]=i;
            count[nums[i]]++;
        }
        int maxCount=INT_MIN;
        for(auto it : count)
        {
            maxCount=max(it.second,maxCount);
        }
        for(auto it:count)
        {
            if(it.second==maxCount)
            {
                len=min(len,last[it.first]-first[it.first]+1);
            }
        }
        return len;
    }
};