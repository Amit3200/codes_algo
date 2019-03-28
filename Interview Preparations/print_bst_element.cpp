//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *createNewNode(int value)
{
    Node *temp=new Node;
    temp->data=value;
    temp->left=temp->right=NULL;
    return temp;
}
Node *newNode(Node *root,int data)
{
    if(root==NULL)
    root=createNewNode(data);
    else if(data<root->data)
    root->left=newNode(root->left,data);
    else
    root->right=newNode(root->right,data);
    
    return root;
}
void printNearNodes(Node *root,int l,int h);
//Position this line where user code will be pasted.
int main() {
    
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        Node *root=NULL;
        int sizeOfArray;
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        for(int i=0;i<sizeOfArray;i++)
        cin>>arr[i];
        
        for(int i=0;i<sizeOfArray;i++)
        {
            root=newNode(root,arr[i]);
        }
        int l,h;
        cin>>l>>h;
        printNearNodes(root,l,h);
        cout<<endl;
      
        
        
    }
	return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The structure of a BST Node is as follows:
struct Node 
{
    int data;
    Node * right, * left;
}; */
void inOrder(Node *root,int l,int h){
    if(root==NULL){
        return;
    }
    inOrder(root->left,l,h);
    if(l<=root->data && h>=root->data){
        cout<<root->data<<" ";
    }
    inOrder(root->right,l,h);
}
void printNearNodes(Node *root, int l, int h)
{
    inOrder(root,l,h);
    cout<<"\n";
}
