class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int maxi = 0;
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j] > maxi){
                 maxi = nums[i]+nums[j];
            }
            i++;
            j--;
        }return maxi;
    }
};
