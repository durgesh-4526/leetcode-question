class Solution {
public:
    int maxPower(string s) {
        int temp = 1;
        int maxi = 1;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] != s[i+1]){
                temp= 1;
            }
            if(s[i] == s[i+1]){
                temp++;
                maxi = max(maxi,temp);
            }
        }return maxi;
    }
};
