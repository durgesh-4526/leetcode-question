class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<bool> F(n+1, false);
        vector<int> town(n+1, 0);
        
        for(auto it : trust)
        {
            F[it[0]] = true;
            town[it[1]]++;
        }
        
        int cnt = 0, ans = 0;
        
        for(int i=1; i<=n; i++)
        {
            if(!F[i])
            {
                cnt++;
                ans = i;
            }
        }
        
        if(cnt != 1 or town[ans] != n-1)
            return -1;
        
        return ans;
    }
};
