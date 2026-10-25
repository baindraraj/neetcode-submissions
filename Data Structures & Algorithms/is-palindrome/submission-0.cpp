class Solution {
public:
    bool isValidRange(char c) {
        int num = int(c);
        if((num>=48 && num<=57) || (num >=65 && num<=90) || (num >=97 && num<=122)) {
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        string str;
        for(auto ch: s) {
            if(isValidRange(ch)) {
                str.push_back(tolower(ch));
            }
        }
       
        int i =0, j = str.length()-1;
        while(i <=j) {
            if(str[i] != str[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
