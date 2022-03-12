class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zero = 0;
        int i = 0;
        int ans = 0;
        int j = 0;
        while(j<nums.size()){
            if(nums[j] == 0){
                zero++;
            }
            if(zero > 1){
                while(nums[i] != 0){
                    i++;
                }
                zero--;
                i++;
            }
            ans = max(ans,j-i+1);
          j++;
        }return ans-1;
    }
};
