class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        if(n%2!=0)
        {
            v.push_back(0);
            for(int i=1;i<n;i+=2)
            {
                int n=i;
                v.push_back(i);
                v.push_back(-i);
                
            }
            return v;
        }
        
        for(int i=1;i<n;i+=2)
            {
                int n=i;
                v.push_back(i);
                v.push_back(-i);
                
            }
        return v;
    }
};