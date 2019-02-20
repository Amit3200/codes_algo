#include<bits/stdc++.h>
using namespace std;
int main(){
	priority_queue<int> pq;
	pq.push(10);
	pq.push(100);
	pq.push(1);
	pq.push(1000);
	pq.push(10000);
	pq.push(11);
	while(!pq.empty()){
		cout<<pq.top()<<"\n";	//
		pq.pop();	//
	}
}
