//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
lld segment_tree[100030];
vector<pair<lld,lld>> v;
lld res[10030];

void build(lld *arr,lld node,lld l,lld r){
	if(l==r){
		segment_tree[node]=arr[l];
	}
	else{
		lld mid=(l+r)>>1;
		build(arr,2*node+1,l,mid);
		build(arr,2*node+2,mid+1,r);
		segment_tree[node]=segment_tree[node*2+1]+segment_tree[node*2+2];
		
	}
}

lld query(lld node,lld l,lld r,lld qlow,lld qhigh){
	if(qlow>r || qhigh<l || l>r)
		return 0;
	if(qlow<=l && qhigh>=r ){
		return segment_tree[node];
	}
	lld mid=(l+r)>>1;
	return query(2*node+1,l,mid,qlow,qhigh)+query(2*node+2,mid+1,r,qlow,qhigh);
}

void update(lld node,lld l,lld r,lld idx,lld val){
	if(l==r){
		segment_tree[node]=val;
		return;
	}
	else{
		lld mid=(l+r)>>1;
		if(idx>=l && idx<=mid)
			update(2*node+1,l,mid,idx,val);
		else
			update(2*node+2,mid+1,r,idx,val);
		segment_tree[node]=segment_tree[2*node+1]+segment_tree[2*node+2];
	}
}

int main(){
	lld n;
	cin>>n;
	lld arr[n],height[n],front[n];
	for(lld i=0;i<n;i++){
		cin>>height[i];
	}
	for(lld i=0;i<n;i++)
		cin>>front[i];
	for(lld i=0;i<n;i++)
		v.push_back({height[i],front[i]});
	sort(v.begin(),v.end());
	memset(arr,0,sizeof(arr));
	memset(segment_tree,0,sizeof(segment_tree));
	
	for(lld i=0;i<n;i++){
		lld l=0,r=n-1,mid;
		while(l<=r){
			lld mid=(r+l)>>1;
			lld num=query(0,0,n-1,0,mid-1);
			num=abs(mid-num);
			if(num==v[i].second && res[mid]==0){
				res[mid]=v[i].first;
				update(0,0,n-1,mid,1);
				break;
			}
			else if(num>v[i].second)
				r=mid-1;
			else
				l=mid+1;
		}
	}
	for(lld i=0;i<n;i++)
		cout<<res[i]<<" ";
}

//6
//5 3 2 6 1 4
//0 1 2 0 3 2
