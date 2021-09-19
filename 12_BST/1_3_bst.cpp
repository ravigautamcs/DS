#include<bits/stdc++.h>
using namespace std;

class node{
    public : 
    int data;
    node *left, *right;

    node (int n){
        data = n;
        left = right = NULL;
    }
};

//accepts the old root node and data and return the new root node
node *insertBST(node * root, int data){
    //base case
    if(root==NULL){
        return new node(data);
    }

    // Rec case -- insert in the subtree
    if(data<=root->data){
        root->left = insertBST(root->left, data);
    }
    else{
        root->right = insertBST(root->right, data);
    }

    return root;
}

node * build(){
    // read the numbers til -1 and also insert in the bst;
    int d; cin>>d;

    node * root = NULL;
    while(d!=-1){
        root = insertBST(root, d);
        cin>>d;
    }
    return root;
}

//bfs
void bfs (node * root){
    queue<node *> q;
    q.push(root);

    while(!q.empty()){
        node * f = q.front();
        cout<<f->data<<" ";

        q.pop();

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return;
}

//inorder Traversal
void Inorder(node * root){
    if(root==NULL) return ;

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}


// searching in bst
bool searchBST(node * root, int data){
    //base condition
    if(root==NULL){
        return false;
    }
    bool ans;
    //recursive 
    if(data == root->data){
        return true;
    }
    else if(data< root->data){
        ans = searchBST(root->left, data);
    }
    else{
        ans = searchBST(root->right, data);
    }
    return ans;
}


int main(){
    node * root = build();
    Inorder(root);
    cout<<endl;
    bfs(root);
    cout<<endl;
    cout<<searchBST(root, 15);
    return 0;
}