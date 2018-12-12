#include <iostream>
using namespace std;
int main()
{
    int n,sum=0,countn=1,subsum=0;//n-->number of coins ,cuntn-->count the number of coins
    cin>>n;
    int *arr1=new int [n];//dynamic allocation array for coins'values with size of the nuber of coins
    for (int i=0;i<n;i++)
    {
        cin>>arr1[i];
        sum+=arr1[i];
    }
    sum/=2;
    int max=1;
    for (int i=0;i<n;i++)
    {
        int temp;
        for (int j=i+1; j<n;j++)
        {
            if (arr1[i]<arr1[j])
                {
                    temp=arr1[i];
                    arr1[i]=arr1[j];
                    arr1[j]=temp;
                }
        }

    }
    for (int i=0;i<n;i++)
    {
        subsum+=arr1[i];
        if (subsum>sum)
        {
            break;
        }
        countn++;
    }
    cout<<countn<<endl;
    return 0;
}