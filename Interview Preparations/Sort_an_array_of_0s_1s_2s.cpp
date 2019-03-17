//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld n,arr[900030];
int main(){
	lld t;
	cin>>t;
	while(t--){
		lld k;
		cin>>n;
		map<lld,lld> mp;
		for(lld i=1;i<=n;i++){
			cin>>k;
			mp[k]++;
		}
		lld orr[100030],ke=0;
		for(auto i:mp){
			for(lld j=0;j<i.second;j++){
				orr[ke++]=i.first;
			}
		}
		for(lld i=0;i<n;i++){
			cout<<orr[i]<<" ";
		}
		cout<<"\n";
	}
}

