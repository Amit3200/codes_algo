//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
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
		lld total1=0,bought_index[10030]={0},sell_index[10030]={0},i=0,by=0,sy=0;
		for(lld i=n-1;i>=0;i--){
			arr[i]=arr[i]-arr[i-1];
		}
		arr[0]*=-1;
		arr[n]=-9999;
		for(lld i=1;i<=n;i++){
			if(arr[i]>0 && arr[i-1]<0){
				by=i-1;
			}
			if(arr[i]<0 && arr[i-1]>0){
				sy=i-1;
				bought_index[total1]=by;
				sell_index[total1]=sy;
				total1++;
			}
		}
		if(total1==0){
			cout<<"No Profit";
		}
		else{
			for(lld i=0;i<total1;i++){
			cout<<"("<<bought_index[i]<<" "<<sell_index[i]<<") ";
			}
		}
		cout<<"\n";
	}
}
