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
int height(Node *root)
{
    if(root==NULL) return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    return 1+max(lh,rh);
}
int main()
{
    struct Node * root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    cout<<height(root);
    return 0;
    
}
