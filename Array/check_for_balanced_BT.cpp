#include <iostream>
#include <cmath>
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
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    bool isBalanced(Node *root)
    {
        return dfsheight(root) != -1;
    }

private:
    int dfsheight(Node *root)
    {
        if (root == NULL)
            return 0;

        int leftheight = dfsheight(root->left);
        if (leftheight == -1)
            return -1;

        int rightheight = dfsheight(root->right);
        if (rightheight == -1)
            return -1;

        if (abs(leftheight - rightheight) > 1)
            return -1;

        return max(leftheight, rightheight) + 1;
    }
};
int main()
{
    // Creating a sample balanced binary tree
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);   
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    Solution obj;
    if (obj.isBalanced(root))
    {
        cout << "The binary tree is balanced." << endl;
    }
    else
    {
        cout << "The binary tree is not balanced." << endl;
    }

    return 0;
}
