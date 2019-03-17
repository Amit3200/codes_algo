//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld n,arr[100030];
int main(){
	lld t;
	cin>>t;
	while(t--){
	cin>>n;
	for(lld i=0;i<n;i++){
		cin>>arr[i];
		}
	lld container=0,dpleft[n+3],dpright[n+3];
	dpleft[0]=arr[0];
	for(lld i=1;i<n;i++){
		dpleft[i]=max(dpleft[i-1],arr[i]);
	}
	dpright[n-1]=arr[n-1];
	for(lld i=n-2;i>=0;i--){
		dpright[i]=max(dpright[i+1],arr[i]);
	}
	for(lld i=0;i<n;i++){
		container+=min(dpleft[i],dpright[i])-arr[i];
	}
	cout<<container<<"\n";
	}
}
