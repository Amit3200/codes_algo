#include<bits/stdc++.h>
using namespace std;
bool it(char a[21][21],int n,int m,int i,int j,bool vis[21][21])
{
    if(i<0 || i>=n || j<0 || j>=m)
     return 0;
     if(a[i][j]=='X') return 1;
     if(vis[i][j]==1) return 1;
     if(vis[i][j]==0 && a[i][j]=='O')
      vis[i][j]=1;
    bool l=it(a,n,m,i,j-1,vis);
    bool r=it(a,n,m,i,j+1,vis);
    bool u=it(a,n,m,i+1,j,vis);
    bool d=it(a,n,m,i-1,j,vis);
    return l&&r&&u&&d;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	  int n,m;
	  cin>>n>>m;
	  char a[21][21];
	  for(int i=0;i<n;i++)
	  {
	      for(int j=0;j<m;j++)
	      {
	         cin>>a[i][j]; 
	      }
	  }
	  for(int i=0;i<n;i++)
	  {
	      for(int j=0;j<m;j++)
	      {
	         if(a[i][j]=='O')
	         {
	              bool vis[21][21]={};
	             if(it(a,n,m,i,j,vis))
	            {
	              a[i][j]='X';
	            }
	         }
	      }
	  }
	   for(int i=0;i<n;i++)
	  {
	      for(int j=0;j<m;j++)
	      {
	         cout<<a[i][j]<<" "; 
        }
	  }
	   cout<<endl;
	}
	return 0;
}
