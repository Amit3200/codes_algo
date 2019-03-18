//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld n,arr[100030],m;
int main(){
	lld t;
	cin>>t;
	while(t--){
		cin>>n;
		for(lld i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		cin>>m;
		lld ans=1e18+1;
		for(lld i=0;i<=n-m;i++){
			if(arr[i+m-1]-arr[i]<ans){
				ans=arr[i+m-1]-arr[i];
			if(ans==0){
				break;
			}
			}
		}
		cout<<ans<<"\n";
	}
}
