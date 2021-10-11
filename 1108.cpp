#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
        string sol;
        for (int i = 0; i < address.size(); i++)
        {
            if (address[i] == '.')
            {
                sol.push_back('[');
                sol.push_back('.');
                sol.push_back(']');
            }else{
                sol.push_back(address[i]);
            }
            
        }
        cout<<sol;
        return sol;
        
    }
};
int main()
{
    string s = "1.1.1.1";
    Solution sol;
    sol.defangIPaddr(s);
    return 0;
}
