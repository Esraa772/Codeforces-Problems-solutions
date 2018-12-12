#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int arr[5001],c1=0,c2=0,c3=0,n,arr1[5001],arr2[5001],arr3[5001],mini,j=0,k=0,m=0;

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if (arr[i]==1) c1++,arr1[j]=(i+1),j++;
        else if (arr[i]==2) c2++,arr2[k]=(i+1),k++;
        else c3++,arr3[m]=(i+1),m++;
    }
    mini=min(c1,min(c2,c3));
    cout<<mini<<endl;
    for(int i=0;i<mini;i++) cout<<arr1[i]<<" "<<arr2[i]<<" "<<arr3[i]<<endl;
    
}