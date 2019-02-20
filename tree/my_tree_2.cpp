#include<bits/stdc++.h>
using namespace std;
struct node{
	node *left,*right;
	int data;
};
node *temp1,*temp2;
node *newNode(int data){
	node *temp=new node;
	temp->data=data;
	temp->right=NULL;
	temp->left=NULL;
	return temp;
}

int height(node *root){
	if(root==NULL)
		return 0;
	return max(height(root->left),height(root->right))+1;
}


void bfs1(node *root,int key){
	queue<node*> q;
	q.push(root);
	if(root->left==NULL && root->right==NULL){
		return;
	}
	while(!q.empty()){
		int s=q.size();
		//while(s>0){
			node *rough=q.front();
			q.pop();
			if(rough->left!=NULL){
				q.push(rough->left);
			}
			if(rough->right!=NULL){
				q.push(rough->right);
			}
			if(rough->right==NULL && rough->left==NULL){
				temp2=rough;
				//if(q.size()==1){
					//delete rough;
				//}
			}
		//s--;
		//}
	}
}

void bfs(node *root,int key){
	queue<node*> q;
	q.push(root);
	node *prev=NULL;
	if(root->left==NULL && root->right==NULL && root->data==key){
		root->data=-1;
		return;
	}
	bool flag=0;
	while(!q.empty()){
		int s=q.size();
		//while(s>0){
			node *rough=q.front();
			q.pop();
			int check=rough->data;
			if(check==key){
				flag=1;
				rough->data=temp2->data;
			}
			if(rough->left!=NULL){
				prev=rough;
				q.push(rough->left);
			}
			if(rough->right!=NULL){
				prev=rough;
				q.push(rough->right);
			}
		//s--;
		//}
	}
	if(flag==1){
	prev->left=NULL;
	prev->right=NULL;
	}
	else{
		cout<<"\n\n Not Found";
	}
	return;
}


void rightmostnode(node *root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	rightmostnode(root->left);
	rightmostnode(root->right);
}


int main(){
	node *root=newNode(1);
	 root->left=newNode(2);
	 root->right=newNode(3);
	 root->left->left=newNode(4);
	 root->left->right=newNode(5);
	 root->right->left=newNode(6);
	 root->right->left->right=newNode(7);
	int key;
	cout<<"\n Height  : "<<height(root);
	cout<<"\n Enter the key ";
	cin>>key;
	cout<<"\n Current Traversal : ";
	rightmostnode(root);
	bfs1(root,key);
	//cout<<temp2->data;
	bfs(root,key);
	cout<<"\n\n Swapped : ";
	rightmostnode(root);
	cout<<"\n Height  : "<<height(root);
}
