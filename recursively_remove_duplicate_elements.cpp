#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string recursive_duplicate(string str)
{
    int n = str.length();
    string temp;
    
    if(str[0]!=str[1])
    {
        temp += str[0];
    }
    int i=1;
    while(i<n)
    {
        if(str[i]!=str[i-1] && str[i]!=str[i+1])
        {
           temp += str[i];
            //cout<<"current temp string: "<<temp<<endl;
        }
        i++;
    }
    
    if(temp.length()==0)
    {
        return temp;
    }
    if(temp.length()!=str.length())
    {
        return recursive_duplicate(temp);
    }
    return temp;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t!=0)
	{
	    string str,res;
	    cin>>str;
	    res = recursive_duplicate(str);
	   // bool x;
	   // x = 'e'^'f';
	    cout<<res<<endl;
	    t--;
	}
	return 0;
}
