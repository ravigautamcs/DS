#include<bits/stdc++.h>
using namespace std;

class node{
    public :
    int data;
    node *left, *right;

    node (int d){
        data=d;
        left=right=NULL;
    }
};

node * buildTree(){
    int d; cin>>d;
    if(d==-1) return NULL;

    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void bfs(node *root){
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node *f = q.front();
        cout<<f->data<<",";

        q.pop();
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return ;
}

void bfsPrintLikeTree(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node *f = q.front();
        if(f==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()) q.push(NULL);
        }
        else{ 
           cout<<f->data<<",";
            q.pop();
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
        }    
    }      
    return ;
}

// count the number of nodes in the tree
int count(node * root){
    if(root==NULL){
        return 0;
    }

    int c1 = count(root->left);
    int c2 = count(root->right);
    return c1+c2+1;
}

// sum of the value of the nodes
int sum(node * root){
    if(root==NULL) return 0;

    int s1 = sum(root->left);
    int s2 = sum(root->right);
    return s1 + s2 + root->data;
}

// height of tree
int height(node * root){
    if(root==NULL) return 0;

    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls,rs)+1;
}

// diameter of the tree -->longest distance between the two nodes
int diameter(node *root){
    if(root==NULL) return 0;

    int hl = height(root->left);
    int hr = height(root->right);
    int c1 = hl +hr;
    int c2 = diameter(root->left);
    int c3 = diameter(root->right);
    return max(c1, max (c2,c3));
}

//calculating the diameter of the tree in the time complexity of O(N)
class Pair {
    public :
        int diameter;
        int height;
};

Pair fastDiameter(node * root){
    Pair p;
    if(root==NULL){
        p.diameter = p.height =0;
        return p;
    }

    Pair left = fastDiameter(root->left);
    Pair right = fastDiameter(root->right);

    p.height = max(left.height, right.height)+1;
    p.diameter = max(left.height + right.height, max(left.diameter, right.diameter));
    return p;
}

// changing the nodes value with the sum of the child nodes
int newTree(node * root){
    if(root==NULL) return 0;

    if(root->left==NULL && root->right==NULL) return root->data;

    // recursive call
    int left = newTree(root->left);
    int right = newTree(root->right);
    int temp = root->data;
    root->data = left + right ;
    return root->data + temp;
}


int main(){  

    node *root = buildTree();
    bfs(root);
    cout<<endl;
    bfsPrintLikeTree(root);
    cout<<count(root);
    cout<<endl;
    cout<<sum(root);
    cout<<endl;
    cout<<diameter(root);
    cout<<endl;
    Pair p = fastDiameter(root);
    cout<<"height : "<<p.height<<"\n";
    cout<<"diameter : "<<p.diameter<<"\n";
    newTree(root);
    bfs(root);
    return 0;
}