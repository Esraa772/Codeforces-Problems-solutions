#include <iostream>
using namespace std;
int main()
{
    int n,x,e=0,o=0,j,k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>x;
       if(x%2)o++,j=i+1;
       else e++,k=i+1;
    }
    if (o==1) cout<<j<<endl;
    else if (e==1)cout<<k<<endl;
}