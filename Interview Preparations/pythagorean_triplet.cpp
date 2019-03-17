//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld n,arr[100030];
int main(){
	lld t,data;
	cin>>t;
	while(t--){
		cin>>n;
		for(lld i=0;i<n;i++){
		cin>>data;
		arr[i]=data*data;}
		sort(arr,arr+n);
		bool flag=0;
		for(lld i=n-1;i>=2;i--){
			lld left=0;
			lld right=i-1;
		    while(left<right){
			    if(arr[left]+arr[right]==arr[i]){
				    flag=1;
				    break;
			    }
			    if(arr[left]+arr[right]<arr[i]){
				    left++;
			    }
			    else{
				    right--;
			    }
		    }
		    if(flag){
		    	break;
			}
		}
		if(flag){
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}
	}
}
