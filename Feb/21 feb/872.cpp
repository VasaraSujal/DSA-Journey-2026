class Solution {
public:

    // void inOrder(TreeNode* root, string &s) {
    //     if(root == NULL) return;
    //     if(root->left == NULL & root->right == NULL) {
    //         s += to_string(root->val) + "_";
    //         return;
    //     }
    //     inOrder(root->left , s);
    //     inOrder(root->right , s);
    // }

    // bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    //     string s1 = "";
    //     string s2 = "";

    //     inOrder(root1, s1);
    //     inOrder(root2, s2);

    //     return s1 == s2;
    // }


    void inOrder(TreeNode* root, vector<int> &v) {
        if(root == NULL) return;
        if(root->left == NULL & root->right == NULL) {
            v.push_back(root->val);
            return;
        }
        inOrder(root->left , v);
        inOrder(root->right , v);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;

        inOrder(root1, v1);
        inOrder(root2, v2);

        return v1 == v2;
    }

};