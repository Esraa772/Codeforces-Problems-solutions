#include <iostream>
using namespace std;
int main()
{
    int n,ans=0,h[30],a[30];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>h[i]>>a[i];
    }
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
             if (i != j && h[i] == a[j] )++ans;
        }
    }
    cout<<ans<<endl;
}