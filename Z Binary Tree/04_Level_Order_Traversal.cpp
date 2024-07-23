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
node*BuildTreeLevelOrder(){
    cout<<"Enter root node data : "<<endl;
    int data;
    cin>>data;
    if(data == -1) return NULL;
    node* root = new node(data);

    queue<node*> q;
    q.push(root);
    
    
    while(!q.empty()){
        node* f = q.front();
        q.pop();
        int leftdata, rightdata;
        cout<<"Enter left Node Data : "<<endl;
        cin>>leftdata;

        if(leftdata != -1){
            node* leftnode = new node(leftdata);
            f->left = leftnode;
        }

        cout<<"Enter Right Node data : "<<endl;
        cin>>rightdata;
        
        if(rightdata != -1){
            node* rightnode = new node(rightdata);
            f->right = rightnode;
            q.push(rightnode);
    }
}

// create root node
// push into q
// access teh front node form q
// ask for left node data && right node data
// make left node & right node
// connect them to front node
// push them into q
