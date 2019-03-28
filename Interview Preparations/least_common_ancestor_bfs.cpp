//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
struct Node {
int data;
struct Node * right, * left;
};
void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = (Node *)malloc(sizeof(Node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }
    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }
}
Node* LCA(Node *root, int , int );
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
    //int i;
        root = NULL;
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);
        }
        int l,r;
        cin>>l>>r;
        cout<<LCA(root,l,r)->data<<endl;
    }
}
map<int,Node *> parent;
Node *bap1,*bap2;
void bfs(Node *root,int n1,int n2){
   queue<Node *> q;
   int x=0;
   q.push(root);
   q.push(NULL);
   while(q.size()>1){
       Node* element=q.front();
       q.pop();
       if(element==NULL){
           q.push(NULL);
           x++;
       }
       else{
           if(element->data==n1){
               bap1=element;
           }
           if(element->data==n2){
               bap2=element;
           }
           if(element->left){
               parent[element->left->data]=element;
               q.push(element->left);
           }
           if(element->right){
               parent[element->right->data]=element;
               q.push(element->right);
           }
       }
   }
}

void rev(vector<Node *> &ver){
    int i=0, j = ver.size()-1,k=0;
    vector<Node *>v2;
    for(int i=j;i>=0;i--){
         v2.push_back(ver[i]);
     }
     for(int i=0;i<=j;i++){
         ver[i]=v2[i];
     }
}

void print(vector<Node *> v1,vector<Node *> v2){
    for(auto i:v1){
        cout<<i->data<<" ";
    }
    cout<<" v1 \n";
    for(auto i:v2){
        cout<<i->data<<" ";
    }
    cout<<" v2 \n";
}

Node* LCA(Node *root, int n1, int n2)
{
    if(root==NULL){
        return NULL;
    }
    bfs(root,n1,n2);
    parent[root->data]=NULL;
    vector<Node *> v1;
    vector<Node *> v2;
    v1.push_back(bap1);
    v2.push_back(bap2);
    // v1.push_back(parent[n1]);
    // v2.push_back(parent[n2]);
    Node *s=parent[n1];
    v1.push_back(s);
    while(parent[s->data]!=NULL){
        v1.push_back(parent[s->data]);
        s=parent[s->data];
    }
    s=parent[n2];
    v2.push_back(s);
    while(parent[s->data]!=NULL){
        v2.push_back(parent[s->data]);
        s=parent[s->data];
    }
    rev(v1);
    rev(v2);
    //cout<<"hello\n";
    //print(v1,v2);
    Node *ans=NULL;
    int h=0;
    for(int i=0;i<min(v1.size(),v2.size());i++){
        if(v1[i]!=v2[i]){
            ans=v1[i-1];
            break;
        }
        h=i;
    }
    if(ans==NULL){
    	ans=v1[h];
	}
    //cout<<ans->data<<" ";
    return ans;
}
