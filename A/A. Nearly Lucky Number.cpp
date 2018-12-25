#include <iostream>
using namespace std;
int main ()
{
    long long n , c=0 , x ;
    cin>>n;
    while (n>0)
    {
        x=n%10;
        n/=10;
        if(x==4 || x==7 ) c++;
    }
    if (c==4||c==7) cout<<"YES\n";
    else cout<<"NO"<<endl;
}