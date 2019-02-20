#include<bits/stdc++.h>
using namespace std;
int heap[11],capacity=10,N=0;


void shiftdown(int k){
	while(2*k<=N){
		int j=2*k;
		if(j<N && heap[j]<heap[j+1])
			j+=1;
		if(heap[k]>heap[j])
			break;
		swap(heap[k],heap[j]);
		k=j;
	}
}


void heapify(int N){
	for(int i=N/2;i>=1;i--){
		shiftdown(i);
	}
}


int main(){
	int n;
	cin>>n;
	int len=n;
	for(int i=1;i<=n;i++){
		cin>>heap[i];
	}
	N=n;
	heapify(N);
	for(int i=1;i<=len;i++){
		cout<<heap[i]<<" ";
	}
	while(N>1){
		swap(heap[1],heap[N--]);
		shiftdown(1);
	}
	cout<<"\n";
	for(int i=1;i<=len;i++){
		cout<<heap[i]<<" ";
	}
	cout<<"\n";
}

