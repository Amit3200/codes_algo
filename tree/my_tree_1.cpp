#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left,*right;
};

node *newNode(int data){
	node *temp=new node;
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

void inOrdertraversal(node *rel){
	if(rel==NULL)
		return;
	inOrdertraversal(rel->left);
	cout<<rel->data<<"\n";
	inOrdertraversal(rel->right);
}

void insertion(node *root,int data){
	queue<node*>q;
	q.push(root);
	while(!q.empty()){
		node *element=q.front();
		q.pop();
		if(element->left==NULL){
			element->left=newNode(data);
			break;
		}
		else{
			q.push(element->left);
		}
		if(element->right==NULL){
			element->right=newNode(data);
			break;
		}
		else{
			q.push(element->right);
		}
	}
}

int main(){
	node *root=newNode(10);
	insertion(root,20);
	insertion(root,30);
	insertion(root,40);
	insertion(root,50);
	insertion(root,60);
	inOrdertraversal(root);
}
