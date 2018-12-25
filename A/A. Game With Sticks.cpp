#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if (n>m)
    {
        int temp;
        temp=n;
        n=m;
        m=temp;
    }
    if (n%2)
    {
        cout<<"Akshat\n";
    }
    else
        cout<<"Malvika\n";
}
