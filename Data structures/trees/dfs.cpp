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
void inorder(struct Node *node)
{
    if(node==NULL) return;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}
int main()
{
    struct Node * root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    inorder(root);
    return 0;
    
}
