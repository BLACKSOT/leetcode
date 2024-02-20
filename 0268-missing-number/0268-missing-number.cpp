class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
//         int n = nums.size();
        
//         for(int i = 0;i<nums.size();i++){
//             for(int j =0;j<nums.size();j++){
//                 if(i==nums[j]){
//                     break;
//                 }
//                 else if(i!=nums[j] && j==nums.size()-1){
//                     return i;
//                 }
//             }
//         }
//         return n;
//     }
        
//         set<int> s;
//         for(int i=0;i<nums.size();i++){
//             s.insert(nums[i]);
//         }
//         nums.clear();
//         for(int it: s){
//             nums.push_back(it);
//         }
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            if(i!=nums[i]){
                return i;
            }
        }
        return nums.size();
    }
};
    