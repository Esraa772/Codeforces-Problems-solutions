#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,x,y;
	cin>>n>>m;
	x=(n+1)/2;
	y=(x+m-1)/m*m;
	if (y>n) cout<<"-1\n";
	else cout<<y<<endl;
}
