//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld arr[100030],n,m,brr[100030];
bool cmp(pair<lld,pair<lld,lld> > a,pair<lld,pair<lld,lld> > b){
	if(a.second.first>b.second.first){
		return true;
	}
	else if(a.second.first==b.second.first){
		if(a.first<b.first){
			return true;
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
}
int main(){
	lld t;
	cin>>t;
	while(t--){
		vector<pair<lld, pair<lld,lld>> > v1;
		lld k=0;
		lld brr[100030];
		lld sol[100030];
		cin>>n;
		map<lld,lld> mp;
		map<lld,lld> mpi;
		for(lld i=0;i<n;i++){
			cin>>arr[i];
			mp[arr[i]]++;
			if(mp[arr[i]]==1){
				brr[k++]=arr[i];
				mpi[arr[i]]=i;
			}
		}
		for(auto i:mp){
			cout<<i.first<<" "<<i.second<<"\n";
			v1.push_back({i.first,{i.second,mpi[i.first]}});
		}
		sort(v1.begin(),v1.end(),cmp);
		lld c=0;
		for(auto i:v1){
			for(lld j=0;j<i.second.first;j++){
				sol[c++]=i.first;
			}
		}
		for(lld i=0;i<c;i++)
			cout<<sol[i]<<" ";
		cout<<"\n";
	}
}

