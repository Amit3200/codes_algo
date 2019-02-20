#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
bool visited[100030]={false};
node *newNode(int data){
	node *temp=new node;
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
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

void bfs(node *root){
	visited[root->data]=1;
	queue<node *> q;
	q.push(root);
	while(!q.empty()){
		int s=q.size();
		while(s>0){
			node *rough=q.front();
			q.pop();
			int check=rough->data;
			cout<<check<<" ";
			if(rough->left!=NULL){
				q.push(rough->left);
			}
			if(rough->right!=NULL){
				q.push(rough->right);
			}
			s--;
		}
	}
}


bool checkproperty(node *root){
	queue<node *> q;
	q.push(root);
	while(!q.empty()){
		int s=q.size();
		while(s>0){
			node *rough=q.front();
			q.pop();
			int check=rough->data;
			//cout<<check<<" ";
			if(rough->left!=NULL){
				q.push(rough->left);
			}
			if(rough->right!=NULL){
				q.push(rough->right);
			}
			if(rough->right!=NULL && rough->left!=NULL){
				if(rough->right->data+rough->left->data!=check){
					return false;
				}
			}
			s--;
		}
	}
	return true;
}	

int main(){
	node *root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	preOrder(root);cout<<"\n";
	postOrder(root);cout<<"\n";
	bfs(root);
	if(checkproperty(root)){
		cout<<"\nTrue";
	}
	else{
		cout<<"\nFalse";
	}
}
