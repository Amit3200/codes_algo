//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include <bits/stdc++.h>
struct Node{
	int data;
	struct Node * next;
	struct Node * bottom ;
};
using namespace std;
void printList(Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->bottom;
    }
}
Node* flatten (Node* root);
int main(void) {
	int t;
	cin>>t;
	while(t--){
    int n,m,flag=1,flag1=1;
    struct Node * temp=NULL;
	struct Node * head=NULL;
	struct Node * pre=NULL;
	struct Node * tempB=NULL;
	struct Node * preB=NULL;
		cin>>n;
        int work[n];
		for(int i=0;i<n;i++)
            cin>>work[i];
		for(int i=0;i<n;i++){
			m=work[i];
			--m;
			temp = (struct Node*)malloc(sizeof(struct Node));
			scanf("%d",&temp->data);
			temp->next=NULL;
			temp->bottom=NULL;
			if(flag){
				head=temp;
				pre=temp;
				flag=0;
				flag1=1;
			}
			else{
				pre->next=temp;
				pre=temp;
				flag1=1;
			}
			for(int j=0;j<m;j++){
				tempB = (struct Node*)malloc(sizeof(struct Node));
				scanf("%d",&tempB->data);
				tempB->next=tempB->bottom=NULL;
				if(flag1){
					temp->bottom=tempB;
					preB=tempB;
					flag1=0;
				}
				else{
					preB->bottom=tempB;
					preB=tempB;
				}
			}
		}
		   Node *fun = head;
		   Node *fun2=head;
		   /*
		while(fun!=NULL)
            {
                cout<<fun->data<<" ";
                fun2 = fun->bottom;
                fun=fun->next;
                while(fun2){
                cout<<fun2->data<<" ";
                fun2=fun2->bottom;
                }
                cout<<endl;
            }*/
            Node* root = flatten(head);
            printList(root);
            cout<<endl;
	}
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/* Node structure  used in the program
struct Node{
	int data;
	struct Node * next;
	struct Node * bottom ;
}; */
/*  Function which returns the  root of 
    the flattened linked list. */
Node *newNode(int data){
    Node *temp=new Node;
    temp->data=data;
    temp->next=NULL;
    temp->bottom=NULL;
    return temp;
}

struct Node *merge_work(Node *A,Node *B){
    Node *ptr=NULL,*h1=A,*h2=B;
    Node *nhead=NULL;
    while(h1!=NULL && h2!=NULL){
        if(h1->data<h2->data){
            if(ptr==NULL){
                ptr=newNode(h1->data);
                h1=h1->bottom;
                nhead=ptr;
            }
            else{
                ptr->bottom=newNode(h1->data);
                ptr=ptr->bottom;
                h1=h1->bottom;
            }
        }
        else{
            if(ptr==NULL){
                ptr=newNode(h2->data);
                h2=h2->bottom;
                nhead=ptr;
            }
            else{
                ptr->bottom=newNode(h2->data);
                ptr=ptr->bottom;
                h2=h2->bottom;
            }
        }            
    }
    while(h1!=NULL){
            if(ptr==NULL){
                ptr=newNode(h1->data);
                h1=h1->bottom;
                nhead=ptr;
            }
            else{
                ptr->bottom=newNode(h1->data);
                ptr=ptr->bottom;
                h1=h1->bottom;
            }
        }
    while(h2!=NULL){
            if(ptr==NULL){
                ptr=newNode(h2->data);
                h2=h2->bottom;
                nhead=ptr;
            }
            else{
                ptr->bottom=newNode(h2->data);
                ptr=ptr->bottom;
                h2=h2->bottom;
            }
        }
        return nhead;
}
Node *flatten(Node *root)
{
   // Your code here
   if(root==NULL){
       return NULL;
   }
   if(root->next==NULL){
       Node *ptr1=merge_work(root,NULL);
       return ptr1;
   }
   Node *pre1=root,*pre2=root->next;
   Node *ptr=merge_work(pre1,pre2);
   printList(ptr);
    if(pre2->next)
  	    pre2=pre2->next;
  	else
  		return ptr;
	while(pre2!=NULL){
		ptr=merge_work(pre2,ptr);
		pre2=pre2->next;
	}
	//cout<<ptr<<"\n";
   return ptr;
}
