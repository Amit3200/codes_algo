//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
//ineffective
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld n,arr[100030];
int main(){
	lld t;
	cin>>t;
	while(t--){
		cin>>n;
		for(lld i=0;i<n;i++){
			cin>>arr[i];
		}
		lld total=0,bought_index[10030]={0},sell_index[10030]={0},i=0;
		while(i<n-1){
			while(i<n-1 && arr[i+1]<=arr[i])
				i++;
			if(i==n-1){
				break;
			}		
			bought_index[total]=i++;
			while(i<n && arr[i]>=arr[i-1]){
				i++;
			}
			sell_index[total]=i-1;
			total++;	
		}
		for(lld i=0;i<total;i++){
			cout<<"("<<bought_index[i]<<" "<<sell_index[i]<<")";
		}
		cout<<"\n";
	}
}
