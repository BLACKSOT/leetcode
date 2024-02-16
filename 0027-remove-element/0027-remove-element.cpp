class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> cute;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                continue;
            }
            cute.push_back(nums[i]);
        }
        nums.clear();
        for(int i=0;i<cute.size();i++){
            nums.push_back(cute[i]);
        }
        return nums.size();
    }
};