class Solution {
public:
    int numTeams(vector<int>& rating) {
        int count = 0;
        for (int i = 0; i < rating.size(); i++)
        {
            int a = 0, b = 0, c = 0, d = 0;
            for (int j = 0; j < i; j++)
            {
                if (rating[i] < rating[j])
                {
                    a++;
                }
                else if (rating[i] > rating[j])
                {
                    b++;
                }
            }
            // cout<<"the j is "<<j<<endl;
            for (int k = i + 1; k < rating.size(); k++)
            {
                if (rating[i] < rating[k])
                {
                    c++;
                }
                else if (rating[i] > rating[k])
                {
                    d++;
                }
            }
            count += a * d + b * c;
        }
        return count;
    }
};
