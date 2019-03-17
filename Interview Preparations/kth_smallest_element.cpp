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
		vector<lld> sol;
		map<lld,lld> mp;
		lld k,data;
		cin>>n;
		for(lld i=0;i<n;i++){
			cin>>data;
			mp[data]++;
		}
		cin>>k;
		for(auto i: mp){
			for(lld j=0;j<i.second;j++){
				sol.push_back(i.first);
			}
		}
		cout<<sol[k-1];
	}
}
