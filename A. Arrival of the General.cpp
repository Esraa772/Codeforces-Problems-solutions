#include <iostream>
using namespace std;
int main()
{
    int n=0,len=0,maxi=0,mini=0,idx1=0,idx2=0;
    cin>>n>>len;
    maxi=mini=len;
    for (int i=1;i<n;i++)
    {
        cin>>len;
        if (mini>=len)
        {
            mini=len;
            idx2=i;
        }
        else if (maxi<len)
        {
            maxi=len;
            idx1=i;
        }
    }
    if (idx1>idx2){cout<<(idx1+n-idx2-2)<<endl;}
    else
        cout<<(idx1+n-idx2-1)<<endl;
}