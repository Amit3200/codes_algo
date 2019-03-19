//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld arr[100030],n;
unordered_map<lld,lld> ump;
int main(){
	lld t,k,data;
	cin>>t;
	while(t--){
	    priority_queue<lld,vector<lld>,greater<lld> > pq;
		cin>>k>>n;
		vector<lld> v1;
		for(lld i=0;i<n;i++){
				cin>>data;
				if((pq.size()+1)<k){
					pq.push(data);
					cout<<"-1 ";
				}
				else if((pq.size()+1)==k){
					pq.push(data);
					cout<<pq.top()<<" ";
				}
				else{
					if(pq.top()<data){
						pq.pop();
						pq.push(data);
					}
					cout<<pq.top()<<" ";
				}
		}
		cout<<"\n";
	}
}
