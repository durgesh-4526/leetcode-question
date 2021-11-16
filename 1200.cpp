#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr)
    {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        int mini = INT_MAX;
        for (int i = 1; i < arr.size(); i++)
        {
            mini = min(mini, arr[i]-arr[i-1]);
        }
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i]-arr[i-1] == mini)
            {
                vector<int> a;
                a.push_back(arr[i-1]);
                a.push_back(arr[i]);
                ans.push_back(a);
            }
        }
        return ans;
        
    }
};
int main()
{
    
    return 0;
}
