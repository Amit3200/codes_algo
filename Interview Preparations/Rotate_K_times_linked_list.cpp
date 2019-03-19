//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
struct node{
	node *next;
	lld data;
}*head=NULL;
node *newNode(lld data){
	node *temp=new node;
	temp->data=data;
	temp->next=NULL;
	return temp;
}
void rotate(lld k,lld n){
	lld target=n-k;
	node *ptr=head;
	lld c=0;
	while(ptr!=NULL){
		c++;
		if(c==target){
			break;
		}
		ptr=ptr->next;
	}
	node *head1=ptr->next;
	node *ptr1=head1;
	while(ptr1->next!=NULL){
		ptr1=ptr1->next;
	}
	ptr1->next=head;
	head=head1;
	ptr->next=NULL;
	node *ptr2=head;
	while(ptr2!=NULL){
		cout<<ptr2->data<<" ";
		ptr2=ptr2->next;
	}
}
int main(){
	lld k,n;
	cin>>n>>k;
	for(lld i=1;i<=n;i++)
	{
		if(head==NULL){
			head=newNode(1);	
		}
		else{
			node *ptr=head;
			while(ptr->next!=NULL){
				ptr=ptr->next;
			}
			ptr->next=newNode(i);
		}
	}
	rotate(k,n);
}

