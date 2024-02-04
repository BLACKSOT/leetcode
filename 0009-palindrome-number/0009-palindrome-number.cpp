#include<string>
class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int s = 0;
        int e = str.size()-1;
        
        while(s<=e){
            if(str[s]!=str[e]){
                return 0;
            }
            s++;
            e--;
        }
        return 1;
    }
};