//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* newNode(int data)
{
    struct Node* Node = (struct Node*)
                        malloc(sizeof(struct Node));
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
    return(Node);
}
void printSpiral(struct Node *root);
/* Driver program to test above functions*/
int main()
{
   int t;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
      //  cout << n1 << " " << n2 << " " << (char)lr << endl;
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        Node *child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
    printSpiral(root);
    cout<<endl;
  }
    return 0;
}

void printSpiral(Node *root)
{
	stack<int> s;
	queue<Node *> q;
	q.push(root);
	q.push(NULL);
	int x=1;
	while(q.size()>1){
		Node *element=q.front();
		q.pop();
		if(element==NULL){
			q.push(NULL);
			x++;
			while(!s.empty()){
				cout<<s.top()<<" ";
				s.pop();
			}
		}
		else{
			if(x%2==0){
				cout<<element->data<<" ";
				if(element->left){
					q.push(element->left);
				}
				if(element->right){
					q.push(element->right);
				}
			}
			else{
				s.push(element->data);
				if(element->left){
					q.push(element->left);
				}
				if(element->right){
					q.push(element->right);
				}
			}
		}
	}
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
}
