//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include <bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  struct Node *left;
  struct Node *right;
  struct Node *nextRight;
};
void connect(struct Node *p);
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct Node* newNode(int data)
{
  struct Node* node = new Node;
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
void printSpecial(Node *root)
{
   if (root == NULL)
     return;
   Node *node = root;
   while (node != NULL)
   {
      printf("%d ", node->data);
      node = node->nextRight;
   }
   if (root->left)
     printSpecial(root->left);
   else
     printSpecial(root->right);
}
void inorder(Node *root)
{
    if (root == NULL)
       return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
/* Driver program to test size function*/
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
     struct Node *child;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     connect(root);
     printSpecial(root);
     printf("");
     cout<<"\n";
     inorder(root);
     printf("");
  }
  return 0;
}

void connect(Node *root)
{
   // Your Code Here
   queue<Node *> q;
   q.push(root);
   q.push(NULL);
   int x=0;
   map<int,Node *> mp;
   while(q.size()>1){
   		Node *element=q.front();
   		q.pop();
   		if(element==NULL){
   			q.push(NULL);
   			x++;
		   }
		else{
			if(mp[x]==NULL){
				mp[x]=element;
				element->nextRight=NULL;
			}
			else{
				mp[x]->nextRight=element;
				mp[x]=element;
				element->nextRight=NULL;
			}
			if(element->left){
				q.push(element->left);
			}
			if(element->right){
				q.push(element->right);
			}
		}
   }
   for(auto i:mp){
   		mp[i.first]->nextRight=NULL;
   }
}


