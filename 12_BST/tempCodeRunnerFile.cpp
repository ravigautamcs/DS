#include<bits/stdc++.h>
using namespace std;

class BST{
    public:
    string str;
    BST * left, *right;
    int f;
    //constructor
    BST(string s){
        str =s;
        left=right=NULL;
        f=1;
    }
    
};


BST *  Insert(BST * root, string str){
    if(root == NULL){
        return new BST(str);
    }
    if(root->str == str){
        root->f++;
    }
    else if(str<root->str){
        root->left = Insert(root->left, str);
    }
    else{
        root->right = Insert(root->right, str);
    }
    return root;
}

BST * create(){
    string str;
    cin>>str;
    BST * root = NULL;
    while(str!="."){
        root = Insert(root, str);
        cin>>str;
    }
    return root;
}

void Inorder(BST* root)
{
    if (!root) {
        return;
    }
    Inorder(root->left);
    cout << root->str <<" "<< root->f<< endl;
    Inorder(root->right);
}

int main(){
cout<<"Input : ";
BST * root = create();
cout<<"\n";
cout<<"Output : "<<"\n";
Inorder(root);

    return 0;
}