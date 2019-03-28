//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
// will only work if the tree is undirected
#include <bits/stdc++.h>
using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
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
/* Function to get diameter of a binary tree */
int diameter(struct Node * tree);
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
     cout << diameter(root) << endl;
  }
  return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
/* Computes the diameter of binary tree with given root.  */

map<int,Node *> mp;
int x=1;
int bfs(Node *root){
	int level=0;
	queue<Node *> q;
	q.push(root);
	q.push(NULL);	
	while(q.size()>1){
		Node *element=q.front();
		q.pop();
		if(element==NULL){
			q.push(NULL);
			x++;
		}
		else{
			mp[x]=element;
			//cout<<element->data<<" "<<x<<" "<<mp[x]<<" \n";
			if(element->left){
				q.push(element->left);
			}
			if(element->right){
				q.push(element->right);
			}
		}
	}
	level=x;
	//cout<<level+1<<" done\n";
	return level;
}


int diameter(Node* root)
{
	int f=bfs(root);
	Node *start=mp[f];
	//cout<<start->data<<" "<<start<<" \n";
	x=1;
	mp.clear();
	int d=bfs(start);
	return d;
}
