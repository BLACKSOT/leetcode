class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> b;
        
        for(int i=0;i<nums.size();i++){
            b[nums[i]]++;
            if(b[nums[i]]>1){
                return true;
            }
        }
        return false;
    }
};