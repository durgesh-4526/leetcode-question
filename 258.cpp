class Solution {
public:
  int sums(int num){
    int sum = 0;
    while(num > 0){
      sum += num%10;
      num /= 10;
    }
    if(sum >= 10)return sums(sum);
    return sum;
  }
    int addDigits(int num) {
        int a = sums(num);
      return a;
    }
};
