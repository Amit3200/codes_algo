//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld n,m,s1,s2,d1,d2,ans=-1,x,y,count1;
lld chess[300][300];
bool visited[300][300];

void bfs(){
	queue<pair<lld,lld>> q;
	map<pair<lld,lld>,lld > mp;
	q.push({s1,s2});
	visited[s1][s2]=1;
	while(!q.empty()){
		pair<lld,lld> idx_pair=q.front();
		q.pop();
		x=idx_pair.first;
		y=idx_pair.second;
		lld dist=mp[{x,y}];
		if(x==d1 && y==d2){
			ans=mp[{x,y}];
			break;
		}
		count1++;
		if(x+1>=0 && x+1<n && y+2>=0 && y+2<m){
			if(visited[x+1][y+2]==0){
				visited[x+1][y+2]=true;
				q.push({x+1,y+2});
				mp[{x+1,y+2}]=dist+1;
			}
		}
		if(x-1>=0 && x-1<n && y>=0 && y+2<m){
			if(visited[x-1][y+2]==0){
				visited[x-1][y+2]=true;
				q.push({x-1,y+2});
				mp[{x-1,y+2}]=dist+1;
			}
		}
		if(x+1>=0 && x+1<n && y-2>=0 && y-2<m){
			if(visited[x+1][y-2]==0){
				visited[x+1][y-2]=true;
				q.push({x+1,y-2});
				mp[{x+1,y-2}]=dist+1;
			}
		}
		if(x-1>=0 && x-1<n && y-2>=0 && y-2<m){
			if(visited[x-1][y-2]==0){
				visited[x-1][y-2]=true;
				q.push({x-1,y-2});
				mp[{x-1,y-2}]=dist+1;
			}
		}
		if(x+2>=0 && x+2<n && y+1>=0 && y+1<m){
			if(visited[x+2][y+1]==0){
				visited[x+2][y+1]=true;
				q.push({x+2,y+1});
				mp[{x+2,y+1}]=dist+1;
			}
		}
		if(x+2>=0 && x+2<n && y-1>=0 && y-1<m){
			if(visited[x+2][y-1]==0){
				visited[x+2][y-1]=true;
				q.push({x+2,y-1});
				mp[{x+2,y-1}]=dist+1;
			}
		}
		if(x-2>=0 && x-2<n && y+1>=0 && y+1<m){
			if(visited[x-2][y+1]==0){
				visited[x-2][y+1]=true;
				q.push({x-2,y+1});
				mp[{x-2,y+1}]=dist+1;
			}
		}
		if(x-2>=0 && x-2<n && y-1>=0 && y-1<m){
			if(visited[x-2][y-1]==0){
				visited[x-2][y-1]=true;
				q.push({x-2,y-1});
				mp[{x-2,y-1}]=dist+1;
			}
		}
	}
}

int main(){
	lld t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		cin>>s1>>s2>>d1>>d2;
		s1--,s2--,d1--,d2--;
		memset(chess,0,sizeof(chess));
		memset(visited,0,sizeof(visited));
		chess[s1][s2]=1;
		count1=0;
		ans=-1;
		bfs();
		cout<<ans<<"\n";
	}
}
