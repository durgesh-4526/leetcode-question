class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int, int> m;
        int count = 0;
        for (int i = 0; i < time.size(); i++)
        {
            time[i] = time[i] % 60;
            if (time[i])
            {
                // cout << m[60 - time[i]] << endl;
                count += m[60 - time[i]];
            }
            else
            {
                // cout << "the m0 is" << m[0] << endl;
                count += m[0];
            }
            m[time[i]]++;
        }
        return count;
    }
};
