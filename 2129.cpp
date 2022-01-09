#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string capitalizeTitle(string s) {
       int l = 0;
       int r = 0;
       for (int i = 0; i < s.size(); i++)
       {
           if(s[i] == ' '){
               l = r = i+1;
           }else{
               r++;
           }
           s[i] = tolower(s[i]);
           if(r-l > 2){
               s[l] = toupper(s[l]);
           }
       }return s;
       
    }
};
int main()
{
    string title = "capiTalIze tHe titLe";
    Solution sol;
    cout<<sol.capitalizeTitle(title);
    return 0;
}
