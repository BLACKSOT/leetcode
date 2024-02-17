class Solution {
public:
    
    vector<int> plus(vector<int> digit){
        int n = digit.size()-1;
        for(int i = n;i>=0;i--){
            digit[i]++;
            if(digit[i]!=10){
                break;
            }
            else{
                digit[i]=0;
                if(i==0){
                    digit.insert(digit.begin(),1);
                    break;
                }
            }
        }
        return digit;
    }
    
    
    vector<int> plusOne(vector<int>& digits) {
        return plus(digits);
    }
};