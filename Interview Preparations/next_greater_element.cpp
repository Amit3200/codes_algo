//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
int main(){
	int d[10030];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>d[i];
	stack<int> s;
	vector<int> res(n,-1);
	int i=0;
	while(i<n){
		int p=d[i];
		while(!s.empty() && d[s.top()]<p){
			res[s.top()]=i;
			s.pop();
		}
		s.push(i);
		i++;
	}
	for(int i=0;i<n;i++)
		cout<<res[i]<<" ";
}
