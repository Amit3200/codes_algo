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

int counter=0;
int work[10030];
int k=1;
void inOrder(node *root,int key){
	if(root==NULL)
		return;
	if(counter<key)
		inOrder(root->left,key);
	counter++;
	if(counter==key){
		cout<<root->data<<" ";
	}
	inOrder(root->right,key);
}


void inOrder(node *root){
	if(root==NULL)
		return;
	inOrder(root->left);
	cout<<root->data<<" ";
	work[k++]=root->data;
	inOrder(root->right);
}

void preOrder(node *root,int key){
	if(root==NULL)
		return;
	counter++;	//if counter<=key
	if(counter==key)
		cout<<root->data;//else make recursive calls;
	preOrder(root->left,key);
	preOrder(root->right,key);
}

void preOrder(node *root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}

void postOrder(node *root){
	if(root==NULL)
		return;
	postOrder(root->left);
	postOrder(root->right);
	cout<<root->data<<" ";
}

void postOrder(node *root,int key){
	if(root==NULL)
		return;
	postOrder(root->left,key);
	postOrder(root->right,key);
	counter++;
	if(counter==key){
		cout<<root->data<<" ";
	}
}

int main(){
	node *root=newNode(1);
	root->left=newNode(2);
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	root->left->right->left=newNode(7);
	root->right=newNode(3);
	root->right->left=newNode(6);
	cout<<"  InOrder  :\n  ";
	inOrder(root);
	cout<<"\n";
	inOrder(root,5);
	counter=0;
	//cout<<"\n"<<work[5];
	cout<<"\n";
	cout<<"  PreOrder  :\n  ";
	preOrder(root);
	cout<<"\n";
	preOrder(root,4);
	cout<<"\n";
	counter=0;
	cout<<"  PostOrder  :\n  ";	
	postOrder(root);
	cout<<"\n";
	postOrder(root,5);	
	
}
