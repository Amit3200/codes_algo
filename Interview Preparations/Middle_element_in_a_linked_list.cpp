//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
struct Node{
	lld data;
	Node *next;
}*root=NULL;

Node *newNode(lld data){
	Node *temp=new Node;
	temp->next=NULL;
	temp->data=data;
	return temp;
}

lld get_middle(Node *head){
	Node *ptr1=head,*ptr2=head;
	while(ptr2!=NULL && ptr2->next!=NULL){
		ptr2=ptr2->next->next;
		ptr1=ptr1->next;
		//cout<<ptr1->data<<" ";
	}
	return ptr1->data;
}
void insert(lld data){
	if(root==NULL){
		root=newNode(data);
	}
	else{
		Node *ptr=root;
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		ptr->next=newNode(data);
	}
}
void print(Node *root){
	Node *ptr=root;
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<"\n";
}
int main(){
	lld n,data;
	cin>>n;
	for(lld i=1;i<=n;i++){
		//cin>>data;
		insert(i);
	}
	print(root);
	cout<<get_middle(root)<<"\n";
}
