#include<bits/stdc++.h>
using namespace std;
int N,heap[11],capacity=10;


int parent(int k){
	return k/2;
}


void shiftup(int k){
	while(k>1 && heap[parent(k)]<heap[k]){
		swap(heap[parent(k)],heap[k]);
		k=parent(k);
	}
}


void display(){
	for(int i=1;i<=N;i++){
		cout<<heap[i]<<" ";
	}
	cout<<endl;
}


int getmax(){
	return heap[1];
}


void ins(int num){
	if(N==capacity){
		cout<<-1<<"\n";
		return;
	}
	heap[++N]=num;
	shiftup(N);
}


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


int extractmax(){
	if(N<1){
		cout<<-1<<"\n";
	}
	int MAX=heap[1];
	swap(heap[1],heap[N--]);
	shiftdown(1);
	return MAX;
}


void increasekey(int n){
	int kk;
	cin>>kk;
	heap[n]+=kk;
	if(heap[parent(n)]<heap[n])
		shiftup(n);
}


void changekey(int n){
	int pp;
	cin>>pp;
	heap[n]=pp;
	if(heap[parent(n)]<heap[n]){
		shiftup(n);
	}
	else{
		shiftdown(n);
	}
}


int main(){
	while(1){
	int t,f=0;
	cin>>t;
	switch(t){
		case 1:
			fflush(stdin);
			int num;
			cin>>num;
			ins(num);
			break;
		case 2:
			cout<<getmax();
			break;
		case 3:
			extractmax();
			break;
		case 4:
			display();
			break;
		case 5:
			fflush(stdin);
			int d;
			cin>>d;
			increasekey(d);
			break;
		case 6:
			fflush(stdin);
			int d1;
			cin>>d1;
			changekey(d1);
			break;
		default:
			f=1;
			break;
		}
	if(f==1){
		break;
		}
}
}
