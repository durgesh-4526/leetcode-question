class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int> m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        priority_queue<pair<int,char>> p;
        for(auto it : m){
            p.push({it.second,it.first});
        }
        string ans = "";
        while (!p.empty())
        {
            int a = p.top().first;
            while(a){
                ans += p.top().second;
              a--;
            }
            p.pop();
        }
        return ans;
    }
};
