//insertion 
//deletion
//traversal
//searching
//inOrder -- DFS
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left,*right;
};

struct node *newNode(int n){
		node *temp=new node;
		temp->data=n;
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

int main(){
	struct node *root=newNode(10);
	root->left=newNode(20);
	root->left->left=newNode(40);
	root->left->right=newNode(50);
	root->right=newNode(30);
	inOrdertraversal(root);
}
