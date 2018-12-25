#include <bits\stdc++.h>
using namespace std ;
int main()
{
	int n;
	char c;
	set<char>s1,s2;
	scanf("%d",&n);
	for(int i =0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>c;
			if (i==j ||  i == n-j-1) s1.insert(c);
			else s2.insert(c);
		}
	}
	if (s1.size() == 1 && s2.size () == 1 && s1!=s2) puts("YES");
	else puts("NO");
}
