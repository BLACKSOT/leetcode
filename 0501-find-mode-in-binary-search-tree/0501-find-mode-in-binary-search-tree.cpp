/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void inorder(TreeNode* root, vector<int> &result){
        if(root==NULL){
            return;
        }
        inorder(root->left,result);
        result.push_back(root->val);
        inorder(root->right,result);
    }
    
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> m;
        vector<int> result;
        vector<int>final;
        
        inorder(root, result);
                
        int count = 0;
        
        for(auto it: result){
            m[it]++;
            }
        int maxfreq=0;
        
        for(auto it:m){
            maxfreq = max(maxfreq,it.second);
        }
        for(auto it:m){
            if(maxfreq ==it.second){
                final.push_back(it.first);
            }
        }
        return final;
        }
};