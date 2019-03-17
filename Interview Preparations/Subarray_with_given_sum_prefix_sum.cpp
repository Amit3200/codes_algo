//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
int main(){
    lld t;
    cin>>t;
    while(t--){
        lld n,k;
        cin>>n>>k;
        lld arr[n+3]={0},brr[n+3]={0},s=0;
        arr[0]=0;
        for(lld i=1;i<=n;i++){
            cin>>arr[i];
            arr[i]=arr[i]+arr[i-1];
            //cout<<arr[i]<<" ";
        }
        lld j=1,f=0,i=0;
        while(i<=n && j<=n){
        	//cout<<arr[j]<<" "<<arr[i]<<"\n";
            if(arr[j]-arr[i]==k){
                f=1;
                break;
            }
            else if(arr[j]-arr[i]>k){
                i++;
            }
            else{
                j++;
            }
        }
        if(f==1){
            cout<<i+1<<" "<<j<<"\n";
        }
        else{
            cout<<"-1\n";
        }
    }
}
