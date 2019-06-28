//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
int MAT[140][140];
int N=4;
int m;
int distx[]={1,0,0,-1,-1,1,-1,1};
int disty[]={0,1,-1,0,1,-1,-1,1};

bool isValid(int i,int j){
	if(i<0 || j<0 || i>=m || j>=m)
		return false;
	else
		return true;
}

bool isattackable(int i,int j){
	for(int k=0;k<8;k++){
		int x=i,y=j;
		while(isValid(x,y)){
			if(MAT[x][y]==1)
				return true;
			x+=distx[k];
			y+=disty[k];	
		}
	}
	return false;		
}
void fixQueens(int n){
	if(n==0){
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				cout<<MAT[i][j]<<" ";
			}
			cout<<"\n";
		}
		exit(1);
	}
	//cout<<n<<"\n";
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			if(MAT[i][j]==0 && !isattackable(i,j)){
				MAT[i][j]=1;
				fixQueens(n-1);
				MAT[i][j]=0;		
			}
		}
	}	
}
int main(){
	int n;
	cin>>n;
	m=n;
	fixQueens(n);	
}
