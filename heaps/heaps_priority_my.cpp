#include<bits/stdc++.h>
using namespace std;
int N=0,capacity=10;
int parent(int k){
	return k/2;
}

struct pq{
	int id,priority;
}heap[11];


void shiftup(int k){
	while(k>1 && heap[parent(k)].priority<heap[k].priority){
		swap(heap[parent(k)],heap[k]);
		k=parent(k);
	}
}


void display(){
	for(int i=1;i<=N;i++){
		cout<<"\n ID : "<<heap[i].id<<" Priority : "<<heap[i].priority;
	}
	cout<<endl;
}


int getmax(){
	return heap[1].id;
}


void ins(struct pq s){
	if(N==capacity){
		cout<<-1<<"\n";
		return;
	}
	heap[++N].id=s.id;
	heap[N].priority=s.priority;
	//cout<<"check\n"<<N<<"\n"<<heap[N].id<<" "<<heap[N].priority<<"\n";
	shiftup(N);
}


void shiftdown(int k){
	while(2*k<=N){
		int j=2*k;
		if(j<N && heap[j].priority<heap[j+1].priority)
			j+=1;
		if(heap[k].priority>heap[j].priority)
			break;
		swap(heap[k],heap[j]);
		k=j;
	}
}


int extractmax(){
	if(N<1){
		cout<<-1<<"\n";
	}
	int MAX=heap[1].id;
	swap(heap[1],heap[N--]);
	shiftdown(1);
	return MAX;
}


//void increasekey(int n){
//	int kk;
//	cin>>kk;
//	heap[n]+=kk;
//	if(heap[parent(n)]<heap[n])
//		shiftup(n);
//}
//
//
//void changekey(int n){
//	int pp;
//	cin>>pp;
//	heap[n]=pp;
//	if(heap[parent(n)]<heap[n]){
//		shiftup(n);
//	}
//	else{
//		shiftdown(n);
//	}
//}


int main(){
	heap[0].id=-1;
	heap[0].priority=-1;
	while(1){
	int t,f=0;
	cin>>t;
	switch(t){
		case 1:
			fflush(stdin);
			struct pq s;
			cout<<"\n Enter Id : ";
			cin>>s.id;
			cout<<"\n Enter Priority : ";
			cin>>s.priority;
			cout<<"\n";
			ins(s);
			break;
		case 2:
			cout<<"\n Max is : "<<getmax();
			break;
		case 3:
			cout<<"\n Max is : "<<extractmax();
			break;
		case 4:
			display();
			break;
//		case 5:
//			fflush(stdin);
//			int d;
//			cin>>d;
//			increasekey(d);
//			break;
//		case 6:
//			fflush(stdin);
//			int d1;
//			cin>>d1;
//			changekey(d1);
//			break;
		default:
			f=1;
			break;
		}
	if(f==1){
		break;
		}
}
}
