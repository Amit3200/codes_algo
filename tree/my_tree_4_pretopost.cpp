#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int x, int n) 
{ 
    for (int i=0;i<n;i++) 
        if (arr[i]==x) 
            return i; 
    return -1; 
} 

void postOrder(int *in,int *pre,int n){
	int root=search(in,pre[0],n);
	if(root!=0){
		postOrder(in,pre+1,root);
	}
	if(root!=n-1){
		postOrder(in+root+1,pre+root+1,n-root-1);
	}
	cout<<pre[0]<<" ";
}


int main(){
	int inOrder[]={4,2,1,5,3,6};
	int preOrder[]={1,2,4,3,5,6};
	int n=6;
	postOrder(inOrder,preOrder,n);
}
