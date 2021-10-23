class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> a;
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                a.push(s[i]);
                if (a.size() > 1)
                {
                    ans += s[i];
                }
            }
            if (s[i] == ')')
            {
                a.pop();
                if (a.size() != 0)
                {
                    ans += s[i];
                }
                
            }
        }
        return ans;
       
    }
};
