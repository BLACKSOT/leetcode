class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> b;
        set<int> s1;
        set<int> s2;
        for(int num:nums1){
            s1.insert(num);
        }
        for(int num:nums2){
            s2.insert(num);
        }
        vector<int> result;
        
        for(int num:s1){
            b[num]++;
        }
        
        for(int num:s2){
            b[num]++;
        }
        for(auto it=b.begin();it!=b.end();it++) {
            if (it->second > 1) { 
                result.push_back(it->first);
            }
        }

        return result;
    }
};