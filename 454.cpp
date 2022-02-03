class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> m;
        int count = 0;
        for(auto i : nums1){
            for(auto j : nums2){
                m[i+j]++;
            }
        }
        for(auto i : nums3){
            for(auto j : nums4){
                if(m.find(-(i+j)) != m.end()){
                    count += m[-(i+j)];
                }
            }
        }return count;
    }
};
