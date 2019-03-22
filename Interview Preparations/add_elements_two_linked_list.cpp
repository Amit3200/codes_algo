//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* Linked list Node */
struct Node
{
    int data;
    struct Node* next;
};
struct Node *newNode(int data)
{
    struct Node *new_Node = (struct Node *) malloc(sizeof(struct Node));
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}
 struct Node* addTwoLists (struct Node* first, struct Node* second);
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_Node = newNode(new_data);
    new_Node->next = (*head_ref);
    (*head_ref)    = new_Node;
}
void printList(struct Node *Node)
{
    while(Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("");
}
void freeList(struct Node *Node)
{
	struct Node* temp;
    while(Node != NULL)
    {   
        temp=Node;
        Node = Node->next;
        free(temp);
    } 
}
int main(void)
{
   int t,n,m,i,x;
   cin>>t;
   while(t--)
   {
	   struct Node* res = NULL;
    struct Node* first = NULL;
    struct Node* second = NULL;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
			cin>>x;
			push(&first, x);
	    }
         cin>>m;
	    for(i=0;i<m;i++)
	    {
			cin>>x;
	    push(&second, x);
	    }
		 res = addTwoLists(first, second);
	    printList(res);
if(first)
freeList(first);
if(second)
freeList(second);
//if(res)
//freeList(res);
   }
   return 0;
}
#include<bits/stdc++.h>
Node*  addTwoLists(Node* first, Node* second){
    string n1="",n2="";
    Node *ptr=first;
    while(ptr!=NULL){
        n1=to_string(ptr->data)+n1;
        ptr=ptr->next;
    }
    Node *ptr1=second;
    while(ptr1!=NULL){
        n2=to_string(ptr1->data)+n2;
        ptr1=ptr1->next;
	}
    int d1=0,d2=0;
    while(n1.length()!=max(n1.length(),n2.length())){
    	n1='0'+n1;
	}
    while(n2.length()!=max(n1.length(),n2.length())){
    	n2='0'+n2;
	}
	string sol="";
//	cout<<n1<<"\n";
//	cout<<n2<<"\n";
	int carry=0,d=0;
    for(int i=max(n1.length(),n2.length())-1;i>=0;i--){
    		d=(((n1[i]-'0')+(n2[i]-'0'))+carry)%10;
    		carry=((n1[i]-'0')+(n2[i]-'0')+carry)/10;
    		//cout<<carry<<" < - carry "<<d<<" <- d\n";
    		sol=to_string(d)+sol;
	}
	if(carry!=0){
		sol=to_string(carry)+sol;
	}
	string solution=sol;
	Node *head=NULL;
	Node *ac=head;
	solution="?"+solution;
	int i=solution.length()-1;
	while(i!=0){
		if(head==NULL){
			head=newNode((solution[i--]-'0'));
			ac=head;
		}
		else{
			Node *temp=newNode((solution[i--]-'0'));
			ac->next=temp;
			ac=temp;
		}
	}
	return head;
}
