//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
int n,arr[100030];

void preOrder(int l,int h){
	if(l>h)
		return;
	int mid=(l+(h-l)/2);
	cout<<arr[mid]<<" ";
	preOrder(l,mid-1);
	preOrder(mid+1,h);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		preOrder(0,n-1);
		cout<<"\n";
	}
}
