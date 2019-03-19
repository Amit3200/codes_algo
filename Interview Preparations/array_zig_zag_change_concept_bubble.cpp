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
		bool change=true;
		for(lld i=0;i<=n-2;i++){
			if(change){
				if(arr[i]>arr[i+1])
					swap(arr[i],arr[i+1]);
			}
			else{
				if(arr[i]<arr[i+1]){
					swap(arr[i],arr[i+1]);
				}
			}
			change=!change;
		}
		for(lld i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
}
