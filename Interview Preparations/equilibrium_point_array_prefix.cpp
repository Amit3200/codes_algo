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
		cin>>n;
		lld s=0,l=0;
		bool f=false;
		for(lld i=1;i<=n;i++){
			cin>>arr[i];
			s+=arr[i];
		}
		lld i;
		for(i=1;i<=n;i++){
			s-=arr[i];
			if(l==s){
				f=true;
				break;
			}
			l+=arr[i];
		}
		if(f){
			cout<<i<<"\n";
		}
		else{
			cout<<-1<<"\n";
		}
	}
}
