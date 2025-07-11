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
    int diameter(Node *root){
        int diameter=0;
        height(root, diameter);
        return diameter;
    }
private:
    int height(Node *root, int &diameter){
        if(root==NULL) return 0;
        int lh=height(root->left, diameter);
        int rh=height(root->right, diameter);
        diameter=max(diameter, lh+rh);
        return 1+max(lh,rh);
    }
};

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    Solution s;
    cout << "Diameter: " << s.diameter(root) << endl;

    return 0;
}