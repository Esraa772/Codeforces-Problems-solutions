#include <iostream>
using namespace std;
int main()
{
    int n,p,v,t,m=0;
    cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>p>>v>>t;
       if(p&&t||p&&v||v&&t)m++;
   }
   cout<<m<<endl;
}