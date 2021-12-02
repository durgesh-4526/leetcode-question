class Solution {
public:
    int dp[101];
    void temp(){
        memset(dp,-1,sizeof(dp));
    }
    int rec(vector<int>& nums,int index){
        if(index >= nums.size()){
            
            return 0;
        }
        if(dp[index]!= -1){
            return dp[index];
        }
        return dp[index] = max(nums[index]+rec(nums,index+2),rec(nums,index+1));
    }
    int rob(vector<int>& nums) {
        temp();
        return rec(nums,0);
    }
};
