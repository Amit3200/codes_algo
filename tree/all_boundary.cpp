#include<bits/stdc++.h>
using namespace std;
struct node{
	node *left,*right;
	int data;
};

node *newNode(int data){
	node *temp=new node;
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

void inOrder(node *root){
	if(root==NULL)
		return;
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}

void allleft(node *root){
	if(root==NULL)
		return;
	allleft(root->left);
	cout<<root->data<<" ";
}

void allright(node *root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";	
	allright(root->right);
}

void simplecheck(){
	node *root=newNode(10);
	root->left=newNode(20);
	root->left->left=newNode(40);
	root->left->right=newNode(50);
	root->left->right->right=newNode(400);
	root->left->right->right->right=newNode(4000);
	root->right=newNode(30);
	allleft(root);
	allright(root->right);
}

int main(){
	simplecheck();
}
