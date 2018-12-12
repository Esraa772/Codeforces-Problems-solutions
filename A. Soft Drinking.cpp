#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, l, c, d, p, nl, np,x=0,y=0,z=0;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  x=(k*l)/(n*nl);
  y=(c*d)/n; 
  np*=n;
  z=p/np;
  cout<<min(min(x,y),z)<<endl;
}