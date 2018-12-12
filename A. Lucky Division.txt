#include <iostream>
using namespace std;
int main()
{
    int n,Luckylist[]={4,7,44,47,74,77,444,447,474,744,774,747,477,777};
    cin>>n;
    for (int i=0;i<14;i++)
    {
        if (n%Luckylist[i]==0)
        {
            cout<<"YES\n";return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}