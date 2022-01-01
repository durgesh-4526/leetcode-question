class Solution {
public:
    int dfs(vector<int> &nums, vector<vector<int>> &dp, int i, int j) {
        if(dp[i][j] != -1) return dp[i][j];
        if(i > j) return 0;
        int n = dp.size(), tmp = INT_MIN, partial = nums[i - 1] * nums[j + 1];
        for(int k = i; k <= j; ++k) {
            int cur = partial * nums[k];
            tmp = max(tmp, dfs(nums, dp, i, k - 1) + cur + dfs(nums, dp, k + 1, j));
        }
        return dp[i][j] = tmp;
    }
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(), 1);
        nums.push_back(1);
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int> (n, -1)); // [1, nums, 1]
        return dfs(nums, dp, 1, n - 2);
    }
};
