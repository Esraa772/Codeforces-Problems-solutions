#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,c=0;string s;
    cin>>n;
    cin>>s;
    while(n)
    {
        if(s[n-1]==s[n-2]) c++;
        n--;
    }
    cout<<c<<endl;
}
