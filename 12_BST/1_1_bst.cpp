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
int height(bst * root){
    if(root==NULL) return 0;

    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls,rs)+1;
}

void printKthLevel(bst * root, int k){
    if(root==NULL) return;

    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    printKthLevel(root->left, k-1);
    printKthLevel(root->right, k-1);
}

void printLevelOrder(bst *root, int h){
    if(root==NULL) return ;

    for(int i=1; i<=h ; i++){
        printKthLevel(root, i);
        cout<<endl;
    }
}

int main(){

    bst *root = buildTree();
    print(root);
    cout<<endl;
    cout<<height(root);
    cout<<endl;
    printLevelOrder(root, height(root)); // this will take O(n^2) time complexity
    return 0;
}