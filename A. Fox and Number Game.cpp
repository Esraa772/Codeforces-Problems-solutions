#include <bits/stdc++.h>
using namespace std;
int arr[110];

int main()
{
   int n;
   cin>>n;
   for (int i=0;i<n;i++) cin>>arr[i];
   for(int j=0;j<n;j++)
   {
       for(int i=0;i<n;i++)
       {
           if (arr[i]>arr[j]){ arr[i]-=arr[j];i--;}
           else if (arr[j]>arr[i]) {arr[j]-=arr[i];i--;}
           
       }
   }
   cout<<n*arr[0]<<endl;
}