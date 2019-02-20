// is tree skew or not
#include<bits/stdc++.h>
using namespace std;
struct node{
	node *left=NULL,*right=NULL;
	char data;
};

node *newNode(char data){
	node *temp=new node;
	temp->left=NULL;
	temp->right=NULL;
	temp->data=data;
	return temp;
}

string s;

bool isvowel(char a){
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
		return true;
	return false;
}

void insertion(node *root,char data){
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

void inorder(node *root){
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}


int main(){
	int k=0,c=0;
	node *temp1=NULL;
	node *temp2=NULL;
	node *root=NULL;
	cin>>s;
	string showme="";
	string tellme="";
	for(int i=0;s[i]!='\0';i++){
		if(isvowel(s[i])){
			showme+=s[i];	
		}
		else{
			tellme+=s[i];
		}
	}
	//cout<<showme<<"\n";
	if(showme.length()>0){
		temp1=newNode(showme[0]);
		for(int i=1;showme[i]!='\0';i++)
			insertion(temp1,showme[i]);
	//	inorder(temp1);
		}
	cout<<"\n";
	if(tellme.length()>0){
		temp2=newNode(tellme[0]);
		for(int i=1;tellme[i]!='\0';i++)
			insertion(temp2,tellme[i]);
	//	inorder(temp2);
	}
	root=newNode('?');
	root->left=temp1;
	root->right=temp2;
	cout<<"\n";
	inorder(root);
}
