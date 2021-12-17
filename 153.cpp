class Solution {
public:
    int findMin(vector<int>& nums) {
        // int a = INT_MAX;
        // for(int i = 0;i<nums.size();i++){
        //     if(nums[i]<a){
        //         a = nums[i];
        //     }
        // }return a ;
        
        // OR
        
        sort(nums.begin(),nums.end());
        return nums[0];
        
        
    }
};
