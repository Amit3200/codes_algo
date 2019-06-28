//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int

void build(lld *st,lld *arr,lld node,lld l,lld r){
	if(l==r){
		st[node]=arr[l];
	}
	else{
		lld mid=(l+r)>>1;
		build(st,arr,2*node+1,l,mid);
		build(st,arr,2*node+2,mid+1,r);
		st[node]=st[2*node+1]+st[2*node+2];
	}
}

lld query(lld *st,lld node,lld l,lld r,lld qlow,lld qhigh){ //q statnds for query
	if(qlow>r || qhigh<l)
		return 0;
	if(qlow<=l && qhigh>=r)
		return st[node];
	lld mid=(l+r)>>1;
	return (query(st,2*node+1,l,mid,qlow,qhigh)+query(st,2*node+2,mid+1,r,qlow,qhigh));
}

int main(){
	lld n;
	cin>>n;
	lld arr[n];
	for(lld i=0;i<n;i++)
		cin>>arr[i];
	lld segment_tree[4*n+40]={};
	build(segment_tree,arr,0,0,n-1); //first 0 root node // index
	for(lld i=0;i<n+10;i++){
		cout<<i<<" "<<" "<<segment_tree[i]<<" Leveler \n";	
	}
}
