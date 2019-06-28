//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
int main(){
	int d[10030];
	int n;
	cin>>n;
	int ans=0;
	for(int i=0;i<n;i++)
		cin>>d[i];
	vector<int> res(n,-1);
	int i=0;
	stack<int> s;
	vector<int> v;
	while(i<n){
		if(s.empty() || d[s.top()]<=d[i])
			v.push_back(i),s.push(i++);
		else{
			int tp=s.top();
			s.pop();
			int area_top;
			if(s.empty()){
				area_top=i*d[tp];
			}
			else{
				area_top=(i-s.top()-1)*d[tp];
			}
			ans=max(ans,area_top);
		}
	}
	for(auto i:v){
		cout<<i<<" ";
	}
	while(s.empty()==false){
			int tp=s.top();
			s.pop();
			int area_top;
			if(s.empty()){
				area_top=i*d[tp];
			}
			else{
				area_top=(i-s.top()-1)*d[tp];
			}
			ans=max(ans,area_top);
	}
	cout<<ans<<"\n";
}
