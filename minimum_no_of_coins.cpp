#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        int k;
        cin>>k>>n;
        vector<int>v(n,0);
        for(int i=0;i<n;i++) cin>>v[i];
        
        // int k;
        // cin>> k;
        // vector<vector<int>> mat(n+1,vector<int>(k+1,INT_MAX-100));
        int mat[n+1][k+1];
        for(int i=0;i<=k;i++) mat[0][i]=INT_MAX-100;
        for(int i=0;i<=n;i++) mat[i][0]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=k;j++)
            {
                if(v[i-1]>j) mat[i][j]=mat[i-1][j];
                else mat[i][j]=min(mat[i-1][j],1+mat[i][j-v[i-1]]);
            }
        }
        if(mat[n][k]>INT_MAX-1000) cout<<-1<<endl;
        else
        {
                    cout<<mat[n][k]<<endl;
            
        }
    }
}
