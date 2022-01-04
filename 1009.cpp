class Solution {
public:
    int bitwiseComplement(int n) {
        vector<long long> temp;
        
if(n==0) return 1;
        while(n!=0){
            int a = n%2;
            if(a == 1){
                temp.push_back(0);
            }else if(a == 0){
                temp.push_back(1);
            }
            n = n/2;
        }
        int sum = 0;
        for(int i = temp.size()-1;i>=0;i--){
            // int a = temp[i]*2;
            sum =sum*2 +temp[i];
        }return sum;
    }
};
