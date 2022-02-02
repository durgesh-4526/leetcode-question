class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
      
        if(s.length() < p.length()) return {};

        vector<int> a(26, 0);
        vector<int> b(26, 0);
        vector<int> ans;

        int i = 0;
        int j = p.length();

        while (p[i])
        {
            a[p[i] - 'a']++;
            b[s[i] - 'a']++;
            i++;
        }
        i--;
        while (i<s.size())
        {
            if (a == b)ans.push_back(i - j + 1);
            i++;
            if (!s[i]) break;
            b[s[i-j] - 'a']--;
            b[s[i] - 'a']++;
        }
        return ans;
    }
};
