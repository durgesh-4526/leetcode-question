#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPrefixString(string s, vector<string> &words)
    {
        int temp = 0;
        string a ;
        for(int i = 0;i<words.size();i++)
        {
            a+= words[i];
            if(a == s){
                temp++;
                break;
            }
        }
        return temp == 1;
    }
};
int main()
{
    string s = "iloveleetcode";
    vector<string> words = {"i", "love", "leetcode", "apples"};
    Solution sol;
    cout<<sol.isPrefixString(s,words);
    return 0;
}
