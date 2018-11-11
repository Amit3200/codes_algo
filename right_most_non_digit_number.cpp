#include<iostream>
using namespace std;

int getFiveCount(long long* arr, int n){
    int fiveCount=0;
	long long temp;
	for(int i=0;i<n;i++){
	    temp= arr[i];
	    while(temp && !(temp%5)){
	        fiveCount++;
	        temp/=5;
	    }
	    arr[i]= temp;
    }
    return fiveCount;
}

long long eliminate2(long long* arr, int n, int fiveCount){
    long long temp;
    for(int i=0;i<n;i++){
	   temp=arr[i];
	   while(fiveCount && temp && !(temp&1)){
	       temp>>=1;
	       fiveCount--;
	   }
	   arr[i]=temp;
	   if(!fiveCount)
	       break;
    }
    return fiveCount;
}

int main()
 {
	//code
	int t,n;
	long long arr[102];
	cin >> t;
	while(t--){
	    cin >> n;
	    for(int i=0;i<n;i++)
	        cin >> arr[i];
	    long long mod=1;
        int fiveCount= getFiveCount(arr,n);	    
        int fiveRemains= eliminate2(arr,n,fiveCount);
        if(fiveRemains)
            mod=5;
        for(int i=0;i<n;i++)
            mod=(mod*(arr[i]%10))%10;
        if(mod==0)
            mod=-1;
        cout << mod <<endl;
	}
	return 0;
}
