#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s; int t=0,deng=0;
    cin>>s;
    char ch=s[0];
    char nvalue;
    for(int i=1;i<s.length();i++)
    {
		nvalue=s[i];
		if(ch==nvalue)
		{
			deng+=1;
			ch=s[i];
		}
        else
		{
			ch=s[i];
			deng=0;
		}
		if(deng>=6)
		{
			t=1;
			break;
		}
    }
 if (t) cout<<"YES\n";
 else cout<<"NO\n";
}