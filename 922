class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> ans = nums;
        int a =0,b=1;
        for(int i=0;i<nums.size();i++)
        {
        if(nums[i]%2 == 0)
        {
            ans[a] = nums[i];
            a++;
            a++;
        }else{
            ans[b] = nums[i];
            b++;
            b++;
        }
        }
        return ans;
    }
};
