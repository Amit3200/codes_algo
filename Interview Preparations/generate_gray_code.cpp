//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
vector<vector<int>> res;
bool isvalid(){
	bool flag=true;
	for(int i=0;i<arr.size()-1;i++){
		int res=arr[i]^arr[i+1];
		if((res & (res-1))!=0)
			flag=false;
	}
	return flag;
}

void permute(int l,int r){
	if(l==r){
		if(isvalid()){
			//cout<<"\nans:\n";
			for(int i=0;i<arr.size();i++)
				cout<<arr[i];
		cout<<"\n";
		}
		return;
	}
	for(int i=l;i<r;i++){
		swap(arr[i],arr[l]);
		permute(l+1,r);
		swap(arr[l],arr[i]);
	} 
}

int main(){
	int n;
	cin>>n;
	int limit=1<<n;
	for(int i=0;i<limit;i++){
		arr.push_back(i);
	}
	permute(0,arr.size());
}

//011
//100
//111
//110
//1 1 2 count of zeroes
//3 3 2 count of ones


