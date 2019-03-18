//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld n,arr[1000030],leftdp[1000030],rightdp[1000030];
int main(){
	lld t;
	cin>>t;
	while(t--){
	cin>>n;
	for(lld i=0;i<n;i++){
		cin>>arr[i];
		}
	leftdp[0]=INT_MIN;
	rightdp[n-1]=INT_MAX;
	for(lld i=1;i<=n-2;i++){
			leftdp[i]=max(leftdp[i-1],arr[i-1]);
	}
	for(lld i=n-2;i>=1;i--){
			rightdp[i]=min(rightdp[i+1],arr[i+1]);
	}
	lld ans=-1;
	for(lld i=1;i<=n-2;i++){
		if(arr[i]>=leftdp[i] && arr[i]<=rightdp[i]){
			ans=arr[i];
			break;
		}
	}
	cout<<ans<<"\n";
	}
}
