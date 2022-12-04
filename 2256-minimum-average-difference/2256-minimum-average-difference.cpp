class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        int minDiff=INT_MAX;
        long long int sumEnd=0,sumStart=0;
        int n=nums.size();
        int index=0;
        if(n==1)
        {
            return 0;
        }
        for(int i=0;i<n;i++)
        {
            sumEnd+=nums[i];
        }
        long long int avg1,avg2;
         for(int i=0;i<n-1;i++)
        {
             sumStart+=nums[i];
             avg1=sumStart/(i+1);
             sumEnd=sumEnd-nums[i];
             avg2=sumEnd/(n-i-1);
             if(abs(avg1-avg2)<minDiff)
             {
                 minDiff=abs(avg1-avg2);
                 index=i;
             }
             
        }
        sumStart+=nums[n-1];
        avg2=0;
        avg1=sumStart/n;
        if(abs(avg1-avg2)<minDiff)
        {
         index=n-1;   
        }
        return index;
    }
};