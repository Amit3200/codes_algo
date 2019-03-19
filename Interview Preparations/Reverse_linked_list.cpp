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

Node* reverse(Node *head)
{
    Node *ptr=head;
    int arr[100030],k=0;
    while(ptr!=NULL){
        arr[k++]=ptr->data;
        ptr=ptr->next;
    }
    ptr=head;
    while(ptr!=NULL){
        ptr->data=arr[--k];
        ptr=ptr->next;
    }
    return head;
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
		insert(i);
	}
	print(root);
	Node *head=reverse(root);
	print(head);
}
