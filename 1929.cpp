class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int j =0;
        int n = nums.size();
        for(int i =n;i<n*2;i++)
        {
            nums.push_back(nums[j]);
            j++;
        }
        return nums;
    }
};
