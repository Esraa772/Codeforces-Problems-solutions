#include <iostream>
using namespace std;
int main()
{
    int k,l,m,n;
    long d,r=0l;
    cin>>k>>l>>m>>n>>d;
    for(long i=1;i<=d;i++)
    {
        if (!(i%k)||!(i%l)||!(i%m)||!(i%n)) r++;
    }
    cout<<r<<endl;
}