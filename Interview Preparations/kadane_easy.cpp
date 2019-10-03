#include<iostream>
using namespace std;
using ll = long long int;
int main()
{
  int n;
  cin>>n;
  ll x;
  cin>>x;
  ll current_max,answer;
  current_max=answer=x;
  for(int i=1;i<n;i++)
  {
      cin>>x;
      current_max = max(current_max+x,x);
      answer = max(answer,current_max);
  }
  cout<<answer<<"\n";
  return 0;
}
