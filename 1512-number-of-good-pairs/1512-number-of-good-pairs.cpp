class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j]){
        //             count++;
        //         }
        //     }
        // }
        // return count;
        
        unordered_map<int,int> p;
        int count = 0;
        int n = nums.size();
        
        for(int i = 0; i<n;i++){
            int curr = nums[i];
            
            if(p[curr]){
                count = count+ p[curr];
            }
            p[curr]++;
        }
        return count;
    }
};