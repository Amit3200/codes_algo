#include<bits/stdc++.h>
using namespace std;
struct node{
	node *left,*right;
	int data;
};


void bfs(node *start){
	queue<node *> q;
	q.push(start);
	q.push(NULL);
	while(q.size()>1){
		node *ugio=q.front();
		q.pop();
		if(ugio==NULL){
			cout<<"\n";
			q.push(NULL);
		}
		else{
			cout<<ugio->data<<" ";
			if(ugio->left){
				q.push(ugio->left);
			}
			if(ugio->right){
				q.push(ugio->right);
			}
		}
	}
}

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

void simplecheck(){
	node *root=newNode(10);
	root->left=newNode(20);
	root->left->left=newNode(40);
	root->left->right=newNode(50);
	root->left->right->right=newNode(400);
	root->left->right->right->right=newNode(4000);
	root->right=newNode(30);
	bfs(root);
}

int main(){
	simplecheck();
}
