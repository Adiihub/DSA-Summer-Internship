#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* left;
    node* right;
    node(int v){
        val = v;
        left = NULL;
        right = NULL;
    }
};

node* BuildTree(){
    int data;
    cin>>data;
    if(data == -1){
        return NULL:
    }
    node* root = new node(data);
    root -> left = BuildTree();
    root -> right = BuildTree();

    return root;
}