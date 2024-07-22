#include<bits/stdc++.h>
#include<queue>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
            node(int data){
                this->data=data;
                this->left=NULL;
                this->right=NULL;
            }
};

node*BuildTree(){
    int data;
    cin>>data;

    // root node ko banane ka kaam mera h
    node* root = new node(data);

    // data == -1 (Base case)
    if(data == -1){
        return NULL;
    }

    // recursion Left subtree ko bana kr de dega
    root->left=BuildTree();

    // recursion Right subtree ko bana kr de dega
    root->right=BuildTree();

    return root;
}

void leverlOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp -> left){
            q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

node* BulidfromLevelOrder( ){
    queue<node*> q;
    cout<<"Enter data for root : ";
    int data;
    cin>>data;
    node* root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"enter data for left node : "<<temp ->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata != -1){
            temp -> left = new node(leftdata);
            q.push(temp -> left);
        }

        cout<<"enter data for Right node : "<<temp ->data<<endl;
        int rightdata;
        cin>>rightdata; 
        if(rightdata != -1){
            temp -> left = new node(rightdata);
            q.push(temp -> left);
        }
    }
}

void  print(node* root){
    if(!root){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

int main(){

    node*root=BuildTree();
    // print(root);
    cout<<"Printing the level Order traversal : "<<endl;
    leverlOrderTraversal(root);
    
    return 0;
}