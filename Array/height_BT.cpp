#include <iostream>
#include <algorithm>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class Solution
{
public:
    int height(Node *node)
    {
        if (node == NULL)
            return 0;
        int lh = height(node->left);
        int rh = height(node->right);
        return 1 + max(lh, rh);
    }
};
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    Solution s;
    cout << "Height: " << s.height(root) << endl;

    return 0;
}
