#include <iostream>
#include <climits>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

class Solution
{
public:
    int maxPathSum(TreeNode *root)
    {
        int maxi = INT_MIN;
        maxPathDown(root, maxi);
        return maxi;
    }

private:
    int maxPathDown(TreeNode *root, int &maxi)
    {
        if (root == NULL)
            return 0;

        int left = max(0, maxPathDown(root->left, maxi));
        int right = max(0, maxPathDown(root->right, maxi));
        maxi = max(maxi, left + right + root->data);
        return max(left, right) + root->data;
    }
};

int main()
{
    TreeNode *root = new TreeNode(-10);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->left->left = new TreeNode(15);
    root->left->right = new TreeNode(7);

    Solution s;
    cout << "Maximum Path Sum: " << s.maxPathSum(root) << endl;

    return 0;
}
