//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld n,arr[100030],dp[100030]={0};
void input(){
	for(lld i=0;i<n;i++){
		cin>>arr[i];
		dp[i]=arr[i];
	}
}
int main(){
	lld t;
	cin>>t;
	while(t--){
		cin>>n;
		input();
		lld i=0,j=0;
		for(lld i=0;i<n;i++){
			for(lld j=0;j<i;j++){
				if(arr[j]<arr[i]){
					dp[i]=max(dp[i],arr[i]+dp[j]);
				}
			}
		}
	cout<<*max_element(dp,dp+n)<<"\n";
	}
}
