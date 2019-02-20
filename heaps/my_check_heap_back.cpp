#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[10030];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	bool flag=false;
	for(int i=n;i>=n/2;i--){
		if(arr[i]>arr[i/2]){
			flag=true;
			break;
		}
	}
	if(flag==false){
		cout<<"Yes it's heap\n";
	}
	else{
		cout<<"No it's not a heap\n";
	}
}
