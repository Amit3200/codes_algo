//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld n,arr[100030];
lld ans=0;
lld overlap(lld l,lld mid,lld r){
	lld max_suffix=0;
	lld suffix_sum=0;
	for(lld i=mid;i>=0;i--)
		suffix_sum+=arr[i],max_suffix=max(suffix_sum,max_suffix);
	lld max_preffix=0;
	lld preffix_sum=0;
	for(lld i=mid+1;i<r;i++)
		preffix_sum+=arr[i],max_preffix=max(preffix_sum,max_preffix);
	return preffix_sum+suffix_sum;
}
lld partition(lld l,lld h){
	if(n==1)	
		return arr[1];
	if(l==h){
		return arr[l];
	}
	lld mid=(l+h)>>1;
	lld m1=partition(l,mid);
	lld m2=partition(mid+1,h);
	ans=overlap(l,mid,h);
	return max(m1,m2,ans);
}
int main(){
	cin>>n;
	for(lld i=0;i<n;i++)
		cin>>arr[i];
	cout<<partition(0,n-1)<<"\n";
}
