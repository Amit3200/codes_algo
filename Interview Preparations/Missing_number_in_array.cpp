//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld n;
int main(){
	lld t;
	cin>>t;
	lld s=0;
	while(t--){
		s=0;
		cin>>n;
		for(lld i=1;i<=n-1;i++){
			lld k;
			cin>>k;
			s+=k;
		}
		cout<<(n*(n+1))/2-s<<"\n";
	}
}
