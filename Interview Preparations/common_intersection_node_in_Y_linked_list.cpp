//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
int intersectPoint(struct Node* head1, struct Node* head2);
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Driver program to test above function*/
int main()
{
    int T,i,n1, n2, n3,l,k;
    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        struct Node *head1 = NULL,  *tail1 = NULL;
        for(i=1; i<=n1; i++)
        {
            cin>>l;
            append(&head1, &tail1, l);
        }
        struct Node *head2 = NULL,  *tail2 = NULL;
        for(i=1; i<=n2; i++)
        {
            cin>>l;
            append(&head2, &tail2, l);
        }
        struct Node *head3 = NULL,  *tail3 = NULL;
        for(i=1; i<=n3; i++)
        {
            cin>>l;
            append(&head3, &tail3, l);
        }
        if (tail1 != NULL)
        tail1->next = head3;
        if (tail2 != NULL)
        tail2->next = head3;
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}
int intersectPoint(Node* head1, Node* head2)
{
    unordered_map<Node*,int> mp;
    Node *ptr1=head1;
    Node *ptr2=head2;
    int len1=0,len2=0;
    while(ptr1!=NULL){
        //cout<<ptr1->data<<" ";
        mp[ptr1]++;
        ptr1=ptr1->next;
    }
    Node *temp=NULL;
    while(ptr2!=NULL){
        if(mp[ptr2]==1){
            temp=ptr2;
            break;
        }
        ptr2=ptr2->next;
    }
    if(temp==NULL){
        return -1;
    }
    else{
        return temp->data;
    }
    
}
