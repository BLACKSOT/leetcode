class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        
        for(int i = 0;i<nums.size();i++){
            for(int j =0;j<nums.size();j++){
                if(i==nums[j]){
                    break;
                }
                else if(i!=nums[j] && j==nums.size()-1){
                    return i;
                }
            }
        }
        return n;
    }
};