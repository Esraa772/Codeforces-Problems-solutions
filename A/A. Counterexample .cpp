#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main()
{
ull l,r,x=-1;
cin>>l>>r;
if(l==r || l+2 >r || l+1>=r)
{
    puts("-1");
    return 0;
}
if(l%2) l++;
if(l+2<=r) printf("%llu %llu %llu\n",l,l+1,l+2);
else puts("-1");
}