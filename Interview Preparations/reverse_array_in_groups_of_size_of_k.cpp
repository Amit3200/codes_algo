//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld n,arr[100030];
int main(){
	lld t,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(lld i=0;i<n;i++)cin>>arr[i];
		for(lld i=0;i<n;i+=k){
			lld lf=i;
			lld rd=min(i+k-1,n-1);
			while(lf<rd){
				swap(arr[lf++],arr[rd--]);
			}
		}
	for(lld i=0;i<n;i++)cout<<arr[i]<<" ";
	cout<<"\n";
	}
}
