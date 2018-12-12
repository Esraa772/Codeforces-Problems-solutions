#include <bits/stdc++.h>
using namespace std;
int main()
{
long long n,m,a,z;
cin>>n>>m>>a;
if(n%a) n=n/a+1;
else n=n/a;
if(m%a) m=m/a+1;
else m=m/a;
z=n*m;
cout<<z<<endl;
}