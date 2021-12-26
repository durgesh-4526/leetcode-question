class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int, vector<int>>> v;
        vector<vector<int>> ans;
        for (int i = 0; i < points.size(); i++)
        {
            int x = points[i][0];
            int y = points[i][1];
            v.push_back(pair{x*x+y*y,points[i]});
        }
        sort(v.begin(),v.end());
        int i = 0;
        while(k--){
            ans.push_back(v[i].second);
            i++;
        }return ans;
    }
};
