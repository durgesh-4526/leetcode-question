class Solution {
public:
    int countElements(vector<int>& nums) {
        // return nums.size()-2;
        sort(nums.begin(),nums.end());
        int count = 0;
        int mini = nums[0];
        int maxi = nums[nums.size()-1];
        for(int i = 0;i< nums.size();i++){
            if(nums[i] != mini && nums[i] != maxi){
                count++;
            }
        }return count;
    }
};
