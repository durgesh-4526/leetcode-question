#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arrangeCoins(int n) {
        int count = 0;
        int i = 1;
        while ((n - i) >= 0)
        {
            count++;
            n = n - i;
            i++;
        }
        return count;
    }
};
int main()
{
    Solution sol;
    cout<<sol.arrangeCoins(8);
    return 0;
}
