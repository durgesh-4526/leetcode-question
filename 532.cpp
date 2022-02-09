class Solution
{
public:
    int findPairs(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;
        // vector<int> temp;
        for (int i = 0; i < nums.size(); i++)
        {
                m[nums[i]]++;
        }
        
        int count = 0;
        for (auto it : m)
        {
            
            // m.erase(nums[i]);
            // m.
            if (k == 0 && it.second > 1)
            {
                count++;
            }
            if (k > 0 && m.find(it.first + k) != m.end())
            {
                count++;
            }
            
        }
        return count;
    }
};
