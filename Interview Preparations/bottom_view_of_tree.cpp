//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
// C++ Program to print Bottom View of Binary Tree
#include<bits/stdc++.h>
using namespace std;
// Tree node class
struct Node
{
    int data; //data of the node
    Node *left, *right; //left and right references
    // Constructor of tree node
    Node(int key)
    {
        data = key;
        left = right = NULL;
    }
};
Node *newNode(int k)
{
    return new Node(k);
}
// Method that prints the bottom view.
void bottomView(Node *root);
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
     bottomView(root);
     cout << endl;
  }
  return 0;
}


void levelOrder(Node *root){
	int x=0;
	queue<pair<Node *,int> > q;
	map<int,int>mp;
	q.push({root,0});
	q.push({NULL,0});
	while(q.size()>1){
		Node *element=q.front().first;
		x=q.front().second;
		q.pop();
		if(element==NULL){
			q.push({NULL,0});
		}
		else{
			mp[x]=element->data;
			if(element->left){
				q.push({element->left,x-1});
			}
			if(element->right){
				q.push({element->right,x+1});
			}
		}
	}
	for(auto i:mp){
		cout<<i.first<<" "<<i.second<<"\n";
	}
}

void bottomView(Node *root)
{
    levelOrder(root);
}
