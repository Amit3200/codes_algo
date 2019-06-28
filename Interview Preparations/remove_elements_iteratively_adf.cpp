//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
#include<bits/stdc++.h>
using namespace std;
#define lld long long int
string removeadj(string s){
	//lld len=s.length();
	string tmp;
	lld n=s.size();
	if(s[0]!=s[1]){
		tmp+=s[0];
	}
	lld i=1;
	while(i<n){
		if(s[i]!=s[i-1] && s[i]!=s[i+1]){
			tmp+=s[i];
		}
		i++;
	}
	if(tmp.length()==0)
		return tmp;
	if(tmp.length()!=s.length()){
		return removeadj(tmp);
	}
	return tmp;
}

int main(){
	string s;
	cin>>s;
	cout<<removeadj(s);
}
