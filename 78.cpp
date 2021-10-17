class Solution {
public:
    vector<vector<int>> ans;
    set<vector<int>> s;
    
    void solve(int n,vector<int> temp,vector<int> nums,int a)
    {
        if(a == n)
        {
            if(s.find(temp) == s.end())
            {
                s.insert(temp);
                ans.push_back(temp);
            }
            return;
        }
        solve(n,temp,nums,a+1);
        temp.push_back(nums[a]);
        solve(n,temp,nums,a+1);
    }
    
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> temp;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        solve(n,temp,nums,0);
        return ans;
    }
};
