#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    if(n%2 == 0)
    {
        for(int i=0;i<n;i++) arr[i]=i+1;
        for (int i=0 ;i<n;i+=2)
        {
            swap(arr[i],arr[i+1]);
            cout<<arr[i]<<" "<<arr[i+1]<<" ";
        }
        cout<<"\n";
    }
    else cout<<"-1\n";
}