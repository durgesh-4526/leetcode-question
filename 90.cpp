class Solution {
public:
    vector<vector<int>> ans;
    set<vector<int>> s;
    
    void solve(int index,vector<int> nums,vector<int> a,int n)
    {
        if(index == n)
        {
            if(s.find(a) == s.end()){
            ans.push_back(a);
            s.insert(a);
            }
            return;
        }
        solve(index+1,nums,a,n);
        a.push_back(nums[index]);
        solve(index+1,nums,a,n);
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<int> a;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        // vector<vector<int>> ans;
        solve(0,nums,a,n);
        
        return ans;
    }
};
