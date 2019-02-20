#include<bits/stdc++.h>
using namespace std;
vector<int> graph[100030];
int n;
bool visited[100030];
int a[100030];
int level[100030];
void bfs(int st){
	queue<int> q;
	q.push(st);
	visited[st]=true;
	while(!q.empty()){
		int node=q.front();
		q.pop();
		for(auto i: graph[node]){
			if(!visited[i]){
				visited[i]=true;
				level[i]=level[node]+1;
				q.push(i);
				a[i]=node;
			}
		}
	}
//	cout<<"\n";
//	int height=*max_element(level,level+n+2);
//	for(int i=0;i<=height;i++){
//		for(int j=1;j<=n;j++){
//			if(level[j]==i){
//				cout<<j<<" ";
//			}
//		}
//		cout<<"\n";
//	}
//	cout<<"\n";
//	for(int i=1;i<=n;i++){
//		cout<<i<<" "<<a[i]<<"\n";
//	}
//	cout<<"\n";
//	cout<<"\n";
	int x,y;
	cin>>x>>y;
	//cout<<"\n";
	if(a[x]==a[y] && level[x]==level[y]){
		cout<<"Siblings here\n";
	}
	//cout<<"\n";
	else if(a[x]!=a[y] && level[x]==level[y]){
		cout<<"Cousins here\n";
	}
	else{
		cout<<"They are don't know queries\n";
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
//6
//1 2
//1 3
//2 4
//2 5
//4 6
