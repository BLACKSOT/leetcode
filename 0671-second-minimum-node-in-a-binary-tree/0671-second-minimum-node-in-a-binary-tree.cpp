class Solution {
public:
    void inorder(TreeNode* root, std::set<int>& s) {
        if(root == nullptr) {
            return;
        }
        inorder(root->left, s);
        s.insert(root->val);
        inorder(root->right, s);
    }
    
    int findSecondMinimumValue(TreeNode* root) {
        std::set<int> s;
        inorder(root, s);
        
        int min = s.empty() ? INT_MAX : *s.begin();
        int secondmin = INT_MAX;
        
        bool foundSecondMin = false;
        for(int val : s) {
            if(val > min) {
                secondmin = val;
                foundSecondMin = true;
                break;
            }
        }
        
        return foundSecondMin ? secondmin : -1;
    }
};
