//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld n;


void merge(lld l,lld mid,lld r,lld *arr){
	lld i=0,j=0,k=0;
	lld n1=mid-l+1;
	lld n2=r-mid;
	lld L[10030],R[10030];
	for(i=0;i<n1;i++)
		L[i]=arr[l+i];
	for(i=0;i<n2;i++){
		R[i]=arr[mid+1+i];
	}
	
	i=0;
	j=0;
	k=l;
	
	while(i<n1 && j<n2){
		if(L[i]<=R[j])
			arr[k++]=L[i++];
		else
			arr[k++]=R[j++];
	}
	while(i<n1){
		arr[k++]=L[i++];
	}
	while(j<n2){
		arr[k++]=R[j++];
	}
	
}

void partition(lld l,lld r,lld *arr){
	if(l==r)
		return;
	if(l>r)
		return;
	if(l<r){
		lld mid=(l+r)>>1;
		partition(l,mid,arr);
		partition(mid+1,r,arr);
		merge(l,mid,r,arr);	
	}
}


int main(){
	lld arr[100030];
	cin>>n;
	for(lld i=0;i<n;i++)
		cin>>arr[i];
	partition(0,n-1,arr);
	for(lld i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}
