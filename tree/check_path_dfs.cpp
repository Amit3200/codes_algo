#include<bits/stdc++.h>
using namespace std;
vector<int> graph[100030];
int asper[100030]={-1};
bool visited[100030]={false};
int level[100030]={0};

void dfs(int st){
	visited[st]=true;
	for(auto i: graph[st]){
		if(!visited[i]){
			asper[i]=st;
			dfs(i);
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
	memset(asper,-1,sizeof(asper));
	dfs(1);
	int s=6;
	int kth=0;
	int path[10030];
	int sq=0;
	path[sq++]=s;
	while(asper[s]!=-1){
		path[sq++]=asper[s];
		s=asper[s];
		kth+=1;
	}
	for(int i=sq-1;i>=0;i--)
		cout<<path[i]<<" ";
}
