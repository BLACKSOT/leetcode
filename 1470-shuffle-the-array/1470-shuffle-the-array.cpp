class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> final;
        
        int k = nums.size()/2;
        for(int i=0;i<nums.size()/2;i++){
            final.push_back(nums[i]);
            final.push_back(nums[k+i]);
        }
        
        return final;
    }
};