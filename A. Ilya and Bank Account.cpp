#include <iostream>
using namespace std;
int main ()
{
    int n,b;
    cin>>n;
    b=n;
    if(n/10>b) b=n/10;
    if (n%10+(n/100)*10>b) b=n%10+(n/100)*10;
    cout<<b;
}s