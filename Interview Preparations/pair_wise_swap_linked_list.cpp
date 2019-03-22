//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
}*head;
void swap(int *a, int *b);
void pairWiseSwap(struct node *head);
  void insert()
{
    int n,i,value;
    struct node *temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        if(i==0)
        {
            head=(struct node *) malloc( sizeof(struct node) );
            head->data=value;
            head->next=NULL;
            temp=head;
            continue;
        }
        else
        {
            temp->next= (struct node *) malloc( sizeof(struct node) );
            temp=temp->next;
            temp->data=value;
            temp->next=NULL;
        }
    }
}
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("");
}
/* Drier program to test above function*/
int main(void)
{
    /* Start with the empty list */
    int t,k,n,value;
     /* Created Linked list is 1->2->3->4->5->6->7->8->9 */
     scanf("%d",&t);
     while(t--)
     {
     insert();
     pairWiseSwap(head);
     printList(head);
     }
     return(0);
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
  Pairwise swap a linked list
  The input list will have at least one element  
  node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/
void pairWiseSwap(struct node *head)
{
  node *ptr=head;
  while(ptr!=NULL && ptr->next!=NULL){
      int t=ptr->data;
      ptr->data=ptr->next->data;
      ptr->next->data=t;
      ptr=ptr->next->next;
  }
}
