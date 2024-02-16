class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int num : nums) {
            s.insert(num);
        }
        int index = 0;
        for (int num : s) {
            nums[index++] = num;
        }
        return s.size();
    }
};
