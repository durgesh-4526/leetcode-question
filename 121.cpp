class Solution {
public:
    int maxProfit(vector<int>& prices) {
      if(prices.size() == 0){
            return 0;
      }
      int ans = 0;
      int mini = INT_MAX;
      for(int i = 0;i< prices.size();i++){
        if(prices[i] < mini){
          mini = prices[i];
        }else if(ans < prices[i]-mini){
          ans = prices[i]-mini;
        }
      }return ans;
    }
};
