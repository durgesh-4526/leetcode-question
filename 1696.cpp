class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        vector<int> dp(nums.size(), 0);
        
        priority_queue<pair<int, int>> max_heap; // {dp[idx], idx}
        for(int i = nums.size()-1; i >= 0; i--){
            // pop out elements that are out of window of size k to find the max element in that range.
            while(max_heap.size() && max_heap.top().second > i+k)
                max_heap.pop();
            // adding the current max cost and current index cost in dp 
            if(!max_heap.empty()) dp[i] = max_heap.top().first + nums[i];
            else dp[i] = 0 + nums[i];
            max_heap.push({dp[i], i});
        }
        return dp[0];
    }
};
