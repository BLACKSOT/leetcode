class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // vector<int> nums2;
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         count++;
        //         continue;
        //     }
        //     nums2.push_back(nums[i]);
        // }
        // nums.clear();
        // for(int i=0;i<nums2.size();i++){
        //     nums.push_back(nums2[i]);
        // }
        // for(int i=0;i<count;i++){
        //     nums.push_back(0);
        // }
        int count= 0;
        for (int i=0; i<nums.size();i++){
            if(nums[i]==0){
                count++;
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        for(int i=0;i<count;i++){
            nums.push_back(0);
        }
    }
};