#include<bits/stdc++.h>
using namespace std;
bool visited[100030];
vector<int> graph[100030];
int asper1[100030];
void bfs(int st){
	visited[st]=true;
	queue<int> q;
	q.push(st);
	while(!q.empty()){
		int node=q.front();q.pop();
		for(auto i:graph[node]){
			if(!visited[i]){
				visited[i]=true;
				q.push(i);
				asper1[i]=node;
			}		
		}
	}
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++){
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	memset(asper1,-1,sizeof(asper1));
	bfs(1);
	int s1=4,s2=7;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	v1.push_back(s1);
	v2.push_back(s2);
	while(asper1[s1]!=-1){
		v1.push_back(asper1[s1]);
		s1=asper1[s1];
	}
	while(asper1[s2]!=-1){
		v2.push_back(asper1[s2]);
		s2=asper1[s2];
	}
	cout<<"\n";
	for(auto i:v2){
		cout<<i<<" ";
	}
	cout<<"\n";
	for(auto i:v1){
		cout<<i<<" ";
	}
	cout<<"\n";
	int f=1;
	for(int i=0;i<v1.size();i++){
		for(int j=0;j<v2.size();j++){
			if(v1[i]==v2[j]){
				//cout<<v1[i]<<" Lowest Common Ancestor\n";
				v3.push_back(v1[i]);
				f=0;
				//break;
			}
		}
		//if(f==0){
		//	break;
		//}
	}
	cout<<"\n";
	int s=0;
	for(auto i:v3){
		cout<<i<<" is Ancestor "<<s+1<<"\n";
		s+=1;
	}
}
