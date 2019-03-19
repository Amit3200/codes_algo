//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld arr[100030],n;
int main(){
	lld t;
	cin>>t;
	while(t--){
		cin>>n;
		for(lld i=0;i<n;i++)
			cin>>arr[i];
		lld element=arr[0];
		for(lld i=1;i<n;i++){
			element^=arr[i];
		}
		cout<<element<<"\n";
	}
}
