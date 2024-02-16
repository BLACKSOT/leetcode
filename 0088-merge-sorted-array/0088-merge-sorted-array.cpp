class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> final;
        
        for(int i=0;i<max(nums1.size(),nums2.size());i++){
            if(i<m){
              final.push_back(nums1[i]);  
            }
            if(i<n){
              final.push_back(nums2[i]);  
            }
        }
        sort(final.begin(),final.end());
        nums1.clear();
        for(int i:final){
            nums1.push_back(i);
        }
    }
};