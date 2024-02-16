class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>result;
        
        for(int i=0;i<s.size();i++){
            char ch= s[i];
            if(isalnum(ch)){
                result.push_back(tolower(ch));
            }
        }
        int r=result.size();
        for(int i=0;i<result.size()/2;i++){
            if(result[i]!=result[r-1-i]){
                return false;
            }
        }
        return true;
    }
};