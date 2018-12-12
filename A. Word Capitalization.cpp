#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    if (s[0]>='a')
    {
        s[0]=s[0]-'a'+'A';
    }
    cout<<s<<endl;
}