#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        // int minsum = INT_MAX;
        // int sum  =0;
        // for(int i = 0;i < nums.size();i++)
        // {
        //     minsum = min(minsum,nums[i]);
        //     sum = max(sum,nums[i]-minsum);
        // }
        // if(sum != 0)
        // {
        //     return sum;
        // }
        // else
        // {
        //     return -1;
        // }

        int maxi = nums[1]-nums[0];
        int mini = nums[0];
        for(int i =1;i<nums.size();i++)
        {
            if(nums[i]-mini > maxi )
            {
               maxi = nums[i]-mini;
            }
            if(nums[i] <mini)
            {
                mini = nums[i];
            }
        }
        if(maxi != 0)
        {
            return maxi;
        }else{
            return -1;
        }
    }
};
int main()
{
    vector<int> nums = {7,1,5,4};
    Solution sol;
    cout<<sol.maximumDifference(nums);
    return 0;
}
