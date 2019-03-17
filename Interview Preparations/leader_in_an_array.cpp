//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld n,arr[100030];
void input(){
	for(lld i=0;i<n;i++){
		cin>>arr[i];
	}
}
int main(){
	lld t;
	cin>>t;
	while(t--){
		lld max=INT_MIN;
		cin>>n;
		input();
		vector<lld> sol;
		for(lld i=n-1;i>=0;i--){
			if(arr[i]>=max){
				max=arr[i];
				sol.push_back(arr[i]);
			}
		}
		for(lld i=sol.size()-1;i>=0;i--){
			cout<<sol[i]<<" ";
		}
		cout<<"\n";
	}
}
