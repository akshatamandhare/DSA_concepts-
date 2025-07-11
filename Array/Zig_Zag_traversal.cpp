#include <vector>
#include <queue>
#include <cstddef>
using namespace std;

// LeetCode's TreeNode definition
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x); left(NULL), right(NULL) {}
};

class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> result;
        if (root == NULL)
        {
            return result;
        }

        queue<TreeNode *> nodequeue;
        nodequeue.push(root);
        bool lefttoright = true;

        while (!nodequeue.empty())
        {
            int size = nodequeue.size();
            vector<int> row(size);

            for (int i = 0; i < size; i++)
            {
                TreeNode *node = nodequeue.front();
                nodequeue.pop();

                int index = (lefttoright) ? i : (size - 1 - i);
                row[index] = node->val;

                if (node->left)
                {
                    nodequeue.push(node->left);
                }
                if (node->right)
                {
                    nodequeue.push(node->right);
                }
            }

            lefttoright = !lefttoright;
            result.push_back(row);
        }

        return result;
    }
};
