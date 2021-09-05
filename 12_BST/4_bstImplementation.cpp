#include<bits/stdc++.h>
using namespace std;

class BST{
    int data;
    BST *left,*right;

    public:
    BST(); //constructor
    BST(int); //parameterised constructor
    BST * Insert(BST*, int); //insert function
    void Inorder(BST*);
};

BST :: BST() : data(0), left(NULL), right(NULL){}

BST :: BST(int x){
    data= x;
    left=right=NULL;
}

BST * BST :: Insert(BST* root, int x){
    if(!root){
        return new BST(x);
    }
    if(x>root->data){
        root->right = Insert(root->right,x);
    }
    else{
        root->left = Insert(root->left, x);
    }
    return root;
}

void BST ::Inorder(BST* root)
{
    if (!root) {
        return;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}

int main(){

    BST b, *root =NULL;
    root = b.Insert(root, 50);
    b.Insert(root,10);
    b.Insert(root,40);
    b.Insert(root,20);
    b.Insert(root,60);
    b.Insert(root,30);

    b.Inorder(root);
    return 0;
}