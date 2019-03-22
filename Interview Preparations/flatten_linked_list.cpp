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
            Node* root = flatten(head);
            printList(root);
            cout<<endl;
	}
	return 0;
}

Node *flatten(Node *root)
{
    int k=0,arr[99999],n=0;
    if(root==NULL || root->next==NULL){
        return root;}
        Node *ptr=root;
        Node *ptr1;
        while(ptr!=NULL){
            ptr1=ptr;
            while(ptr1->bottom!=NULL){
                arr[k++]=ptr1->data;
                ptr1=ptr1->bottom;
            }
            arr[k++]=ptr1->data;
            ptr1->bottom=ptr->next;
            ptr->next=NULL;
            ptr=ptr1->bottom;
        }
        Node *head=root;
        while(head!=NULL){
        	head->next=head->bottom;
        	head=head->next;
		}
        sort(arr,arr+k);
		Node *local=root;
		for(int i=0;i<k;i++){
			local->data=arr[i];
			local=local->next;
		}
		return root;
}
