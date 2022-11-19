#define INF (double)1000
class Solution {
public:
    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
        int sz = trees.size(), i = 1;
        sort(trees.begin(), trees.end(), [](vector<int>& t1, vector<int>& t2) {
            if(t1[1] == t2[1]) return t1[0] < t2[0];
            return t1[1] > t2[1];
        });

        vector<vector<int>> outer_points = {trees[0]};
        while(i < sz && trees[i][1] == outer_points.back()[1]) {
            outer_points.push_back(trees[i++]);
        }
        
        if(i == sz) return outer_points;
        
        outer_points.push_back(trees[i]);
        vector<double> slope_stk = {slope_calc(trees[i-1], trees[i++])};
        
        for(; i < sz; ++i) {
            while(!slope_stk.empty() && isOuter(slope_stk.back(), *(outer_points.end() - 2), outer_points.back(), trees[i])) {
                slope_stk.pop_back();
                outer_points.pop_back();
            }
            slope_stk.push_back(slope_calc(outer_points.back(), trees[i]));
            outer_points.push_back(trees[i]);
        }
        
        if(sz == outer_points.size()) return outer_points;  
        
        i = sz - 2;
        while(i >= 0 && trees[i][1] == outer_points.back()[1]) {
            outer_points.push_back(trees[i--]);
        }
        
        outer_points.push_back(trees[i]);
        slope_stk = {slope_calc(trees[i+1], trees[i--])};

        for(; i >= 0; --i) {
            while(!slope_stk.empty() && isOuter(slope_stk.back(), *(outer_points.end() - 2), outer_points.back(), trees[i])) {
                slope_stk.pop_back();
                outer_points.pop_back();
            }
            slope_stk.push_back(slope_calc(outer_points.back(), trees[i]));
            outer_points.push_back(trees[i]);
        }
        outer_points.pop_back();

        return outer_points;
    }

private:
    double slope_calc(vector<int>& t1, vector<int>& t2) {
        if(t1[0] == t2[0]) return -INF;
        double yd = (t1[1] - t2[1]);
        return yd / (t1[0] - t2[0]);
    }
    bool isOuter(double prev_slope, vector<int>& prev_tree, vector<int>& t1, vector<int>& t2) {
        double slope = slope_calc(prev_tree, t2);
        if(prev_slope > 0 && slope < 0) return 1; 
        if(prev_slope < 0 && slope > 0) return 0;
        return (slope > prev_slope);
    }
};