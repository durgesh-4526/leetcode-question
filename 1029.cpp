#include <bits/stdc++.h>
using namespace std;
bool mysort(vector<int> &a, vector<int> &b)
{
    return a[0] - a[1] < b[0] - b[1];
}
class Solution
{
public:
    int twoCitySchedCost(vector<vector<int>> &costs)
    {
        int ans = 0;
        sort(costs.begin(), costs.end(), mysort);
        for (int i = 0; i < costs.size() / 2; i++)
        {
            ans += costs[i][0];
        }
        for (int i = costs.size() / 2 + 1; i < costs.size(); i++)
        {

            ans += costs[i][1];
        }
        return ans;
    }
};
int main()
{

    return 0;
}
