class Solution {
public:
    string addBinary(string a, string b) {
        int i = 0, j = 0;
        
        // reverse both the strings in order to start from the unit's place
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        
        // declare and initialize necessary variables
        int lena = a.size(), lenb = b.size();
        int x = 0, y = 0, carry = 0, sum = 0;
        char fin;
        string res;
        
        while(i < lena or j < lenb){
            if(i < lena and j < lenb){
                x = a[i] - '0';
                y = b[j] - '0';
            }
            else if(i < lena){
                x = a[i] - '0';
                y = 0;
            }
            else if(j < lenb){
                x = 0;
                y = b[j] - '0';
            }
            else{
                x = 0;
                y = 0;
            }
            
            // sum up two digits and carry
            sum = x + y + carry;
            carry = sum/2;
            sum = sum%2;
            fin = sum + '0';
            res.push_back(fin);
            i++;
            j++;
        }
        if(carry != 0){
            res.push_back(carry + '0');
        }
        
        // reverse the string
        reverse(res.begin(), res.end());
        return res;
    }
};
