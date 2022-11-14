class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        map<int,int> m1,m2;
        vector<vector<int>> ans(2);
        for(int i=0;i<nums1.size();i++)
        {
            m1[nums1[i]]++;
        }
        int k=0;
        for(int i=0;i<nums2.size();i++)
        {
            m2[nums2[i]]++;
            if(!m1.count(nums2[i]))
            {
                if(!count(ans[1].begin(),ans[1].end(),nums2[i]))
                {
                 ans[1].push_back(nums2[i]);   
                }
            }
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(!m2.count(nums1[i]))
            {
                if(!count(ans[0].begin(),ans[0].end(),nums1[i]))
                {
                 ans[0].push_back(nums1[i]);   
                }
            }
        }
        return ans;
    }
};