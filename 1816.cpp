class Solution {
public:
    string truncateSentence(string s, int k) {
        int i = 0;
        int j = 0;
        while(k != 0){
            if(s[j] == ' ')k--;
            if(j == s.size()-1){
                return s;
            }
            j++;
        }return s.substr(i,j-1);
    }
};
