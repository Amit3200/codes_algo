#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int a[n], dp[n];
	    for(int i=0;i<n;i++) {
	        cin>>a[i];
	        dp[i] = 1;
	    }
	    int maxx = 0;
	    for(int i=0;i<n;i++) {
	        int j = 0;
	        while(j !=i){
	            if(a[j] < a[i]) 
	                dp[i] = max(dp[j]+1, dp[i]);
	            j++; 
	        }
	        maxx = max(maxx, dp[i]);
	    }
	    
	    cout<<maxx<<'\n';
	}
	return 0;
}
