//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld field[900][900];
lld n,m;

bool isvalid(lld x,lld y){
	if(x>n || y>m || x<0 || y<0)
		return false;
	return true;
}
int main(){
	lld t;
	cin>>t;
	lld distx[]={0,1,-1,0};
	lld disty[]={1,0,0,-1};
	while(t--){

		cin>>n>>m;
		
		queue<pair<lld,lld>> q;
 		for(lld i=0;i<n;i++){
			for(lld j=0;j<m;j++){
				cin>>field[i][j];
				if(field[i][j]==2){
					q.push({i,j});
					field[i][j]=0;
				}
			}
		}
		lld days_passed=0;
		while(!q.empty()){
			lld size_ele=q.size();
			while(size_ele--){
				lld x=q.front().first;
				lld y=q.front().second;
				q.pop();
				//cout<<size_ele<<" "<<q.size()<<" \n";
				for(lld j=0;j<4;j++){
					lld x1=x+distx[j];
					lld y1=y+disty[j];
					if(isvalid(x1,y1) && field[x1][y1]==1){	
						field[x1][y1]=0;
						q.push({x1,y1});
					}
				}
			}
			days_passed++;	
		}
		lld c=0;
		for(lld i=0;i<n;i++){
			for(lld j=0;j<m;j++)
				if(field[i][j]==0){
					c++;
				}
		}
		if(c==n*m)
			cout<<days_passed-1<<"\n";
		else
			cout<<-1<<"\n";
	}
}
