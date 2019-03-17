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
		for(lld i=1;i<=n;i++){
			cin>>arr[i];
		}
		lld mx=INT_MIN,s=0;
		for(lld i=1;i<=n;i++){
			s+=arr[i];
			if(mx<s){
				mx=s;
			}
			if(s<0){
				s=0;
			}
		}
	cout<<mx<<"\n";
	}
}
