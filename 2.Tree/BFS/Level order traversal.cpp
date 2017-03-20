#include<cstdio>
#include<iostream>
#include<queue>
#include<cstdlib>

using namespace std;

struct tree
{
    int data;
    tree* left;
    tree* right;
};

tree* newNode(int data)
{
    tree* New= new tree();
    New->data=data;
    New->left=NULL;
    New->right=NULL;

    return New;
}

tree* Insert(tree* root,int data)
{
    if(root==NULL)
        root=newNode(data);
    else if(data<= root->data)
        root->left=Insert(root->left, data);
    else
        root->right=Insert(root->right,data);

    return root;
}

bool Search(tree* root, int data)
{
    if(root==NULL) return false;
    else if(root->data==data) return true;
    else if(data<=root->data) return Search(root->left, data);
    else return Search(root->right, data);


}

void bfs(tree* root)
{
    if(root==NULL)
        return;
    queue<tree*> q;

    q.push(root);

    while(!q.empty())
    {
        tree* current=q.front();
        printf("%d ", current->data);

        if(current->left!=NULL) q.push(current->left);
        if(current->right!=NULL) q.push(current->right);

        q.pop();
    }


}

void print(tree* root)
{
    if(root==NULL) return;
    else
        {
            printf("%d\n", root->data);
            if(root->left!=NULL)
            print(root->left);
            if(root->right!=NULL)
            print(root->right);
        }

}

int main()
{
    int a;

    tree* root;
    root=NULL;

    root = Insert(root,4);
    root = Insert(root,5);
    root = Insert(root,6);
    root = Insert(root,3);
    root = Insert(root,9);


    bfs(root);

    return 0;
}
