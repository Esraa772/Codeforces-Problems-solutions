#include <iostream>
using namespace std;
int n,p,q;bool arrp[111];
int main ()
{
    
    cin>>n>>p;
    for (int i=0;i<p;i++) cin>>q,arrp[q-1]=1;
    cin>>p;
    for(int i=0;i<p;i++) cin>>q,arrp[q-1]=1;
    for(int i=0;i<n;i++) if (arrp[i]==0) {cout<<"Oh, my keyboard!";return 0;}
    cout<<"I become the guy.";
}
