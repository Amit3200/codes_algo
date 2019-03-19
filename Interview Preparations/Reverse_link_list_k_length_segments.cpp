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
node *reverse(node *head,lld k)
{ 
    node *ptr=head,*slow=head;
    while(ptr!=NULL && ptr->next!=NULL){
        stack<int> s;
        for(lld i=0;i<k;i++){
            if(slow!=NULL){
            s.push(slow->data);
            slow=slow->next;
            }
        }
        slow=ptr;
        for(lld i=0;i<k;i++){
            if(slow!=NULL){
            slow->data=s.top();
            s.pop();
            slow=slow->next;
            }
        }
        ptr=slow;
    }
    return head;
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
	reverse(head,k);
}
