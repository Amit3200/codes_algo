//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
int numwork(string s){
	int n=s.size();
	int d=0;
	n--;
	//cout<<n<<" "<<s<<" "<<s[0]<<"\n";
	for(int i=0;i<s.size();i++){
		d+=(s[i]-'0')*(pow(10,n));
		n--;
	}
	//cout<<"\n";
	return d;
}
int main(){
	string mark;
	cin>>mark;
	vector<string> mystring;
	stack<int> s;
	for(int i=0;i<mark.size();i++){
		string t;
		if(mark[i]=='.'){
			continue;
		}
		while(mark[i]!='.'){
			t+=mark[i++];
		}
		mystring.push_back(t);
	}
	for(auto i : mystring){
			//cout<<i<<" ";
			if(i=="+"){
				int n1=s.top();
				s.pop();
				int n2=s.top();
				s.pop();
				int d=n1+n2;
				s.push(d);
				}
			else if(i=="-"){
				int n1=s.top();
				s.pop();
				int n2=s.top();
				s.pop();
				int d=n1-n2;
				s.push(d);
				}
			else if(i=="*"){
				int n1=s.top();
				s.pop();
				int n2=s.top();
				s.pop();
				int d=n1*n2;
				//cout<<n1<<" "<<n2<<" "<<n1*n2<<"\n";
				s.push(d);
				}
			else if(i=="/"){
				int n1=s.top();
				s.pop();
				int n2=s.top();
				s.pop();
				int d=n1/n2;
				s.push(d);
				}
			else
				s.push(numwork(i));
		}
		cout<<s.top();
}
