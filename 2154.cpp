#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == original){
                original *= 2;
            }
            if(nums[i] > original){
                break;
            }
        }
        return original;
    }
};
int main()
{
    vector<int> nums = {5,3,6,1,12};
    int original = 3;
    Solution sol;
    sol.findFinalValue(nums,original);
    return 0;
}
