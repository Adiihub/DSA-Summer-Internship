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

void PrintLevelOrder(node* root){
    queue<node*>q;
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp -> left)  q.push(temp -> left);
            if(temp -> right) q.push(temp -> right);
        }
    }
}

node* BulidfromLevelOrder( ){
    cout<<"Enter data for root : ";
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    }
    node* root = new node(data);

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        int leftdata;
        cout<<"enter left node data of : "<<temp ->data<<endl;
        cin>>leftdata;

        if(leftdata != -1){
            node* leftNode= new node(leftdata);
            temp -> left = leftNode;
            q.push(leftNode);
        }

        int rightdata;
        cout<<"enter data for Right node : "<<temp ->data<<endl;
        cin>>rightdata; 
        if(rightdata != -1){
            node* rightNode = new node(rightdata);
            temp -> right = rightNode;
            q.push(rightNode);
        }
    }
}

int main(){

    node*root=BulidfromLevelOrder();
    // print(root);
    cout<<"Printing the level Order traversal : "<<endl;
    PrintLevelOrder(root);
    
    return 0;
}