#include<bits/stdc++.h>
using namespace std;
vector<int> graph[100030];
int asper[100030]={-1};
bool visited[100030]={false};
int level[100030]={0};
void bfs(int st){
	visited[st]=true;
	queue<int> q;
	q.push(st);
	while(!q.empty()){
		int node=q.front();q.pop();
		for(auto i:graph[node]){
			if(!visited[i]){
				visited[i]=true;
				level[i]=level[node]+1;
				asper[i]=node;
				q.push(i);
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
	memset(asper,-1,sizeof(asper));
	bfs(1);
	int s=4;
	int kth=0;
	while(asper[s]!=-1){
		cout<<kth+1<<" ancestor is ";
		cout<<asper[s]<<" \n";
		s=asper[s];
		kth+=1;
	}
}
