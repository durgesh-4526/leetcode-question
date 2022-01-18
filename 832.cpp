class Solution {
public:
    vector<int> flipandreverse(vector<int> k)
    {
        // vector<int> v = k;
        for (int i = 0; i < k.size(); i++)
        {
            if (k[i] == 0)
            {
                k[i] = 1;
            }
            else if (k[i] == 1)
            {
                k[i] = 0;
            }
        }
        reverse(k.begin(), k.end());
        return k;
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {
        vector<vector<int>> sol;
        for (auto i : image)
        {
            vector<int> a = flipandreverse(i);
            sol.push_back(a);
        }
        
        return sol;
    }
};
