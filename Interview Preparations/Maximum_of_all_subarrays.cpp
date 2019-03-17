//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
//inefficient way
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld n,arr[100030];
void reset(){
	memset(arr,0,sizeof(arr));
}
int main(){
	lld t;
	cin>>t;
	while(t--){
		lld k;
		cin>>n>>k;
		reset();
		vector<lld> sol;
		for(lld i=0;i<n;i++) cin>>arr[i];
		lld maxi=*max_element(arr,arr+k);
		for(lld i=0;i<=n-k;i++){
			sol.push_back(*max_element(arr+i,arr+i+k));
		}
		for(auto i:sol){
			cout<<i<<" ";
		}
		cout<<"\n";
	}
}
