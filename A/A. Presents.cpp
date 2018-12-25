#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr1[i];
        arr2[i]=i+1;
    }
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr1[i]>arr1[j])
            {
                int temp;
                temp = arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
                temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    return 0;
}
