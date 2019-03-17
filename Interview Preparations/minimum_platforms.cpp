//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld n,st[100030],en[100030];
lld stores[100030],k;
bool overlap(lld i,lld j){
	return max(st[i],en[i])<=min(st[j],en[j]);
}
int main(){
	lld t;
	cin>>t;
	while(t--){
		cin>>n;
		for(lld i=0;i<n;i++){
			cin>>st[i];
		}
		for(lld i=0;i<n;i++){
			cin>>en[i];
		}
		sort(st,st+n);
		sort(en,en+n);
		lld platforms_required=1,ans=1;
		lld i=1,j=0;
		while(i<n && j<n){
			if(st[i]<en[j]){
				platforms_required+=1;
				i++;
				if(platforms_required>ans){
					ans=platforms_required;
				}
			}
			else{
				platforms_required--;
				j++;
			}
		}
	cout<<ans<<"\n";
	}
}
