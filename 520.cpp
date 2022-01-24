class Solution {
public:
    bool detectCapitalUse(string word){
        int count = 0;
        int first = 0;
        if (isupper(word[0]))
        {
            first = 1;
        }
        for (int i = 0; i < word.size(); i++)
        {
            if (isupper(word[i]))
            {
                count++;
            }
        }
        if(count == word.size() || count == 0 || (first == 1 && count == 1)){
            return true;
        }else{
            return false;
        }
        
    }
};
