class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        int n=nums.size();
        int sum=0;
        vector<int> v;
         for(int i=0;i<n;i++)
         {
             if(nums[i]%2==0)
             {
              sum+=nums[i];   
             }
             
         }
        for(int i=0;i<queries.size();i++)
        {
         int index=queries[i][1];
             int val=queries[i][0];
            if(nums[index]%2!=0&&(nums[index]+val)%2==0)
            {
                sum+=(nums[index]+val);
                nums[index]+=val;
                
            }
            else if(nums[index]%2==0&&(nums[index]+val)%2!=0)
            {
                sum-=nums[index];
                nums[index]+=val;
            }
            else if(nums[index]%2==0&&(nums[index]+val)%2==0)
            {
                sum+=val;
                nums[index]+=val;
            }
            else{
                nums[index]+=val;
            }
           
                v.push_back(sum);
            }
           
        
         return v;   
    }
        
};