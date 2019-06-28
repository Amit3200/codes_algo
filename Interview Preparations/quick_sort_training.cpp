//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int

lld partition(lld *arr,lld l,lld r){
	lld pivot=arr[r];
	lld i=l-1;
	for(lld j=l;j<=r-1;j++){
		if(arr[j]<=pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[r]);
	return i+1;
}

void quicksort(lld *arr,lld l,lld r){
	if(l<r){
		lld pi=partition(arr,l,r);
		quicksort(arr,l,pi-1);
		quicksort(arr,pi+1,r);
	}
}

int main(){
	lld n;
	cin>>n;
	lld arr[10030];
	for(lld i=0;i<n;i++)
		cin>>arr[i];
	quicksort(arr,0,n-1);
	for(lld i=0;i<n;i++)
		cout<<arr[i]<<" ";	
}
