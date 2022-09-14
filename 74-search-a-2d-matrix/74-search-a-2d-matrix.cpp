class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(int i=0;i<matrix.size();i++)
        {
            if(matrix[i][matrix[i].size()-1]<target)
                {
                    continue;
                }
            for(int j=0;j<matrix[i].size();j++)
            {
                
                int start=0,end=matrix[i].size()-1;
                if(end==start)
                {
                    if(matrix[i][end]==target)
                    {
                        return true;
                    }
                    return false;
                }
                while(start<=end)
                {
                    int mid=start+(end-start)/2;
                    if(matrix[i][mid]==target)
                    {
                        return true;
                    }
                    else if(matrix[i][mid]<target)
                    {
                        start=mid+1;
                    }
                    else
                    {
                        end=mid-1;
                    }
                }
            }
        }
        return false;
    }
};