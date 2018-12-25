#include <iostream>
using namespace std;

int main()
{
    int n,t,x,sum=0;
    cin>>n>>t;
    for(int i=0;i<n;i++) {cin>>x;sum+=x;}
   sum+=(n-1)*10;
   if(sum<= t)
	cout<<(t-sum)/5 + 2*(n-1)<<endl;
    else
        cout<<"-1\n";
}