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
int max_path_sum(Node *root,int &maxi)
{
    if(root==NULL) return 0;
    int lh=max(0,max_path_sum(root->left,maxi));
    int rh=max(0,max_path_sum(root->right,maxi));
    maxi=max(maxi,lh+rh+root->data);
    return max(lh,rh)+root->data;
}
int diameter_tree(Node *root)
{
    int maxi=0;
    max_path_sum(root,maxi);
    return maxi;
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
