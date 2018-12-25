#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0;
    cin>>n>>k;
    int arr[n];
    for (int i=0;i<n;i+=1)cin>>arr[i];
    for(int i=0;i<n;i+=1)if (arr[i]>=arr[k-1]&&arr[i]>0) c++;
    cout<<c<<"\n";
}
