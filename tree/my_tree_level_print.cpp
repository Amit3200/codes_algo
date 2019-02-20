#include<bits/stdc++.h>
using namespace std;
vector<int> graph[100030];
bool visited[100030];
int level[100030];
int n;
void bfs(int st){
	queue<int> q;
	q.push(st);
	visited[st]=true;
	while(!q.empty()){
		int node=q.front();
		q.pop();
		for(auto i:graph[node]){
			if(!visited[i]){
				level[i]=level[node]+1;
				visited[i]=true;
				q.push(i);
			}
		}
	}
	int height=*max_element(level,level+n+2);
	//cout<<height<<"\n";
	for(int i=0;i<=height;i++){
		for(int j=1;j<=n;j++){
			if(level[j]==i){
				cout<<j<<" ";
			}
		}
		cout<<"\n";
	}
}

int main(){
	cin>>n;
	for(int i=0;i<n-1;i++){
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	bfs(1);
}
