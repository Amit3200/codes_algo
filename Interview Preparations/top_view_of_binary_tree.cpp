//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
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
void topView(struct Node *root);
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct Node* newNode(int data)
{
  struct Node* node = (struct Node*)malloc(sizeof(struct Node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
/* Driver program to test size function*/
int main()
{
  int t;
  struct Node *child;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
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
     topView(root);
     cout << endl;
  }
  return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//Structure of binary tree
/*struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};*/
// function should print the topView of the binary tree
void topView(struct Node *root)
{
    // Your code here
    queue<pair<Node *,int> > q;
    int x=0;
    int level=0;
    q.push({root,0});
    q.push({NULL,0});
    map<pair<int,int>,int> mp;
    map<int,int> d;
    while(q.size()>1){
    	Node *element=q.front().first;
    	int x=q.front().second;
    	q.pop();
    	if(element==NULL){
    		q.push({NULL,0});
    		level++;
		}
		else{
	    	if(d[x]==0 && mp[{level,x}]==0 ){
	    		mp[{level,x}]=element->data;
	    		//cout<<element->data<<"\n";
	    		//cout<<element->data<<" "<<level<<" "<<x<<" \n";
	    		d[x]=1;
			}
	    	if(element->left){
	    		q.push({element->left,x-1});
			}
			if(element->right){
				q.push({element->right,x+1});
			}
		}
	}

	for(auto i:mp){
		cout<<i.second<<" ";
	}
}

