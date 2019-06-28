//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
struct node{
	lld data;
	node *next=NULL;
}*head=NULL;

node *newNode(lld data){
	node *temp=new node;
	temp->data=data;
	return temp;
}
lld tree[10030];

void preorder(lld i,lld n){
	if(i<n){
		cout<<tree[i]<<" "; //pre_order
		preorder(2*i+1,n);
		//cout<<tree[i]<<" "; //post_order
		preorder(2*i+2,n);
	}
}

int main(){
	lld n,data;
	cin>>n;
	if(head==NULL){
		cin>>data;
		head=newNode(data);
	}
	node *ptr=head;
	for(lld i=0;i<n-1;i++){
			cin>>data;
			ptr->next=newNode(data);
			ptr=ptr->next;
	}
	ptr=head;
	lld k=0;
	while(ptr!=NULL){
		tree[k++]=ptr->data;
		ptr=ptr->next;
	}
	preorder(0,n);
}
