#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='H'||s[i]=='Q'||s[i]=='9'||s[i]=='+')
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
}