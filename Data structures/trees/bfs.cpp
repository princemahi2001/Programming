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
void bfs(Node *root)
{
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node *curnode = q.front();
        q.pop();
        cout<<curnode->data<<" ";
        if(curnode->left !=NULL) q.push(curnode->left);
        if(curnode->right !=NULL) q.push(curnode->right);
    }
}
int main()
{
    struct Node * root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    bfs(root);
    return 0;
    
}
