#include<bits/stdc++.h>
using namespace std;

class bst{
    public :
    int data;
    bst * left, *right;

    bst(int d){
        data =d;
        right=left=NULL;
    }
};

bst * buildTree(){
    int d;
    cin>>d;

    if(d==-1)
        return NULL;
    
    bst * root = new bst(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void print(bst * root){
    if(root==NULL) return ;

    cout<<root->data<<"\t";
    print(root->left);
    print(root->right);
}

//level order Print :- recursive approach 
void LOrderPrint(bst * root){
    if(root==NULL) return ;

    
}

int main(){

    bst *root = buildTree();
    print(root);
    return 0;
}