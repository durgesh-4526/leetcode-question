class Solution {
public:
    int myAtoi(string s) {
        long digit = 0;
        int sign = 1;
        int i = 0;
        while(s[i] == ' ') i++;
        if(s[i]=='-') {sign = -1; i++;}
        else if(s[i] == '+') {sign = 1; i++;}
        while(s[i] >= '0' && s[i]<= '9')
        {
            digit = (digit*10)+ (s[i]-'0');
            if(digit*sign > INT_MAX) return INT_MAX;
            if(digit*sign < INT_MIN) return INT_MIN;
            i++;
        }
        return digit*sign;
    }
};
