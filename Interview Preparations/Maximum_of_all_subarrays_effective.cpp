//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
//semi-effective
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
		set<pair<lld,lld> > sol;
		set<pair<lld,lld> > ::reverse_iterator it;
		lld c=0;
		vector<lld> ans;
		for(lld i=0;i<n;i++) cin>>arr[i];
		for(lld i=0;i<k;i++){
			sol.insert({arr[i],i});
		}
		for(lld i=0;i<=n-k;i++){
			it=sol.rbegin();
			ans.push_back(it->first);
			sol.erase({arr[i],i});	
			sol.insert({arr[i+k],i+k});
		}
		for(auto i:ans){
			cout<<i<<" ";
		}
		cout<<"\n";
	}
}
