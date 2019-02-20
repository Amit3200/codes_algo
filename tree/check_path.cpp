#include<bits/stdc++.h>
using namespace std;
vector<int> graph[100030];
int asper[100030]={-1};
bool visited[100030]={false};
int level[100030]={0};

void bfs(int st,int dest){
	visited[st]=true;
	queue<int> q;
	q.push(st);
	while(!q.empty()){
		int node=q.front();q.pop();
		for(auto i:graph[node]){
			if(!visited[i]){
				visited[i]=true;
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
	bfs(1,5);
	int s=5;
	int kth=0;
	int path[10030];
	int sq=0;
	path[sq++]=s;
	while(asper[s]!=-1){
		//cout<<kth+1<<" ancestor is ";
		path[sq++]=asper[s];
		//cout<<asper[s]<<" \n";
		s=asper[s];
		kth+=1;
	}
	for(int i=sq-1;i>=0;i--)
		cout<<path[i]<<" ";
}
