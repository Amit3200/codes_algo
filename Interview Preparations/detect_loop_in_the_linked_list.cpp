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
int detectloop(node *head){
    node *ptr1=head;
    node *ptr2=head->next;
    bool flag=false;
    while(ptr1 && ptr2 && ptr2->next!=NULL){
        if(ptr1==ptr2){
            flag=true;
            return 1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
    }
    return 0;
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
	detectloop(head);
}
