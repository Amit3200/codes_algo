//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld arr[100030],n,m,brr[100030];
bool cmp(string a,string b){
	string t1=a+b;
	string t2=b+a;
	return t1>t2;
}

int main(){
	lld t;
	cin>>t;
	while(t--){
		lld n;
		cin>>n;
		string s[n];
		for(lld i=0;i<n;i++){
			cin>>s[i];
		}
		sort(s,s+n,cmp);
		for(lld i=0;i<n;i++)
		cout<<s[i]<<"";
		cout<<"\n";
	}
}
