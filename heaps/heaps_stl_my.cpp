//heap operations
//get max O(1)
//extract max O(logn)
//insert O(logn)
//display O(n)
#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
void getmax(vector<int> &arr){
	cout<<arr.front()<<"\n";
}
void extractmax(vector<int> &arr){
	int node=arr.front();
	cout<<node<<"\n";
	//pop_heap(arr.begin(),arr.end());
	arr.erase(arr.begin()+0);
	make_heap(arr.begin(),arr.end());
}
void insertheap(vector<int> &arr){
	int k;
	fflush(stdin);
	cin>>k;
	arr.push_back(k);
	make_heap(arr.begin(),arr.end());
	//push_heap(arr.begin(),arr.end());
	cout<<"\n";
}
void display(vector<int> &arr){
	for(auto i:arr){
		cout<<i<<" ";
	}
	cout<<"\n";
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		arr.push_back(k);
	}
	make_heap(arr.begin(),arr.end());
	fflush(stdin);
	while(1){
	int t,f=0;
	cin>>t;
	switch(t){
		case 1:
			getmax(arr);
			break;
		case 2:
			extractmax(arr);
			break;
		case 3:
			insertheap(arr);
			break;
		case 4:
			display(arr);
			break;
		default:
			f=1;
			break;
		}
	if(f==1){
		break;
		}
	}
}
