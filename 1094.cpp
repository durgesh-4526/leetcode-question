class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> temp(1001,0);
        int k = 0;
        for(int i = 0; i< trips.size();i++){
            // for(int j = trips[i][1];j <= trips[i][2];j++){
            //     temp[j] += trips[i][0];
            // }
            vector<int> a = trips[i];
            int subi = a[0];
            int from = a[1];
            int to = a[2];
            temp[from]+= subi;
            temp[to]-= subi;
        }
        for(int i = 0; i < temp.size();i++){
            k += temp[i];
            if(k > capacity){
                return false;
            }
        }return true;
    }
};
