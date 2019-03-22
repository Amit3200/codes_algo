//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!

// C program to find n'th Node in linked list
#include<iostream>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
struct Node* SortedMerge(struct Node* a, struct Node* b);
void MoveNode(struct Node** destRef, struct Node** sourceRef);
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
/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}
/* Driver program to test above function*/
int main()
{
    int T,i,n1,n2,l,k;
    cin>>T;
    while(T--)
    {
        struct Node *head1 = NULL,  *tail1 = NULL;
        struct Node *head2 = NULL,  *tail2 = NULL;
        cin>>n1>>n2;
        for(i=1; i<=n1; i++)
        {
            cin>>l;
            append(&head1, &tail1, l);
        }
        for(i=1; i<=n2; i++)
        {
            cin>>l;
            append(&head2, &tail2, l);
        }
        Node *head = SortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}

Node* SortedMerge(Node* head1,   Node* head2)
{
    Node *head=NULL;
    Node *ptr=head;
    while(head1!=NULL && head2!=NULL){
        if(head1->data<head2->data){
            if(head==NULL){
                head=head1;
                ptr=head1;
            }
            else{
                ptr->next=head1;
                ptr=head1;
            }
            head1=head1->next;
        }
        else{
            if(head==NULL){
                head=head2;
                ptr=head2;
            }
            else{
                ptr->next=head2;
                ptr=head2;
            }
            head2=head2->next;
        }
    }
        while(head1){
            if(head==NULL){
                head=head1;
                ptr=head1;
            }
            else{
                ptr->next=head1;
                ptr=ptr->next;
            }
            head1=head1->next;
        }
        while(head2){
            if(head==NULL){
                head=head2;
                ptr=head2;
            }
            else{
                ptr->next=head2;
                ptr=ptr->next;
            }
            head2=head2->next;
        }
        return head;
}
