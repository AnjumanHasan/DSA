class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,h=height.size()-1;
        int maxA=INT_MIN;
        while(l<h)
        {
            maxA=max(maxA,min(height[h],height[l])*(h-l));
            
            if(height[l]<height[h])
            {
                l++;
            }
            else
            {
                h--;
            }
        }
        return maxA;
    }
};