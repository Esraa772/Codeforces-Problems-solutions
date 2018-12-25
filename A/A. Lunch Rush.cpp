#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int *arrf=new int [n];
    int *arrt=new int [n];
    int *arrm=new int [n];
    for (int i=0;i<n;i++)
    {
        cin>>arrf[i]>>arrt[i];
        if (arrt[i]>k)
        {
            arrm[i]= (arrf[i]-(arrt[i]-k));
        }
        else
        {
            arrm[i]=arrf[i];
        }
    }
    for (int i=1;i<n;i++)
    {
        if (arrm[0]<arrm[i])
        {
            arrm[0]=arrm[i];
        }
    }
    cout<<arrm[0]<<endl;
    return 0;
}
