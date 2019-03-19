//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld arr[100030],n,m,brr[100030];
vector<pair<lld,lld> > v1;

int main(){
	lld t;
	cin>>t;
	while(t--){
		vector<lld> sol;
		map<lld,lld> mp;
		map<lld,lld> mpe;
		cin>>n>>m;
		for(lld i=0;i<n;i++){
			cin>>arr[i];
			mp[arr[i]]++;
		}
		for(lld i=0;i<m;i++){
			cin>>brr[i];
		}
		for(lld i=0;i<m;i++){
			if(mp[brr[i]]>0){
				for(lld j=0;j<mp[brr[i]];j++){
					sol.push_back(brr[i]);
					mpe[brr[i]]=1;
				}
			}
		}
		for(auto i:mp){
			if(mpe[i.first]==0){
				for(lld j=0;j<i.second;j++)
					sol.push_back(i.first);
			}
		}
		for(lld i=0;i<n;i++){
			cout<<sol[i]<<" ";
		}
		cout<<"\n";
	}
}
