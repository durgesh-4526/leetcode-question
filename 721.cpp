class Solution {
public:
    unordered_map<string,unordered_set<string>>mp;
   unordered_set<string>vis;
    void find(string s,vector<string>&v)
    {
        vis.insert(s);
        v.push_back(s);
        for(auto it:mp[s])
        {
            if(vis.find(it)==vis.end())
            {
                find(it,v);
            }
        }
        
    }
    vector<vector<string>> accountsMerge(vector<vector<string>>& mat) 
    {
        for(auto it:mat)
        {
            string name=it[0];
            string email=it[1];
            for(int i=2;i<it.size();i++)
            {
                mp[email].insert(it[i]);
                mp[it[i]].insert(email);
            }
        }
        vector<vector<string>>ans;
        for(auto it:mat)
        {
            vector<string>v;
            string name=it[0];
            string email=it[1];
            v.push_back(name);
            if(vis.find(email)==vis.end())
            {
                find(email,v);
                sort(v.begin()+1,v.end());
                ans.push_back(v);
            }
        }
        return ans;
    }
};
