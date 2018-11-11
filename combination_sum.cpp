#include <bits/stdc++.h>
using namespace std;

void print(vector <int> q)
{cout<<"(";
    for(int i=0;i<q.size()-1;i++)
    cout<<q[i]<<" ";
    cout<<q[q.size()-1]<<")";
   
}
void sum(vector <int> v,vector <int> q,int k,int s,int j,bool &r)
{
    if(s==k)
    { r=true;
        print(q);
        return;
    }
    for(int i=j;i<v.size();i++)
    {
        if(s>k)
        return;
        
        q.push_back(v[i]);
        
        sum(v,q,k,s+v[i],j,r);
        j++;
        if(q.size()==0)
        return;
        q.pop_back();
        
    }
    
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector <int> v;
	    set<int> w;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        w.insert(x);
	       
	    }
	    set <int> ::iterator it=w.begin();
	    while(it!=w.end())
	    {
	        v.push_back(*it);
	        it++;
	    }
	    int k;
	    cin>>k;
	    vector <int> q;
	    sort(v.begin(),v.end());
	    int s=0;
	    int j=0;
	    bool r=false;
	    sum(v,q,k,s,j,r);
	    if(!r)
	    cout<<"Empty";
	    cout<<endl;
	}
	return 0;
}
