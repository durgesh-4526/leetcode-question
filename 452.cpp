class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end(),[&](auto& a,auto &b){
            return a[1]<b[1];
        });
        int ans=1;
        int arrow=arr[0][1];
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i][0]>arrow)
            {
                arrow=arr[i][1];
                ans++;
            }
        }
        return ans;
    }
};
