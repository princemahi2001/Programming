#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *left,*right;
    
    Node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
int height(Node *root,int &diameter)
{
    if(root==NULL) return 0;
    int lh=height(root->left,diameter);
    int rh=height(root->right,diameter);
    diameter=max(diameter,lh+rh);
    return 1+max(lh,rh);
}
int diameter_tree(Node *root)
{
    int diameter=0;
    height(root,diameter);
    return diameter;
}
int main()
{
    struct Node * root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->right->left=new Node(4);
    root->right->left->left=new Node(5);
    root->right->left->left->left=new Node(6);
    root->right->right=new Node(7);
    root->right->right->left=new Node(8);
    root->right->right->left->right=new Node(9);
    cout<<diameter_tree(root);
    return 0;
    
}
