#include <iostream>
#include<vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode *create(vector<int>&nums,int l,int r)
    {
        if(l>r)
            return nullptr;
        int mid=(l+r)/2;
        TreeNode *root=new TreeNode(nums[mid]);
        root->left= create(nums,l,mid-1);
        root->right=create(nums,mid+1,r);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode *root;
        root=create(nums,0,nums.size()-1);
        return root;
    }
    void inorder(TreeNode *root)
    {
        if(root!= nullptr)
        {
            inorder(root->left);
            cout<<root->val<<'\t';
            inorder(root->right);
        }
    }
    void del(TreeNode *root)
    {
        if(root!= nullptr)
        {
            del(root->left);
            del(root->right);
            delete root;
        }
    }
};
int main() {
    vector<int>nums{-10,-3,0,5,9};
    Solution A;
    TreeNode *root;
    root=A.sortedArrayToBST(nums);
    A.inorder(root);
    A.del(root);
    return 0;
}

