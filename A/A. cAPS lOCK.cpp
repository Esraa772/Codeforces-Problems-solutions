#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int t1=1,t2=1;
    if (s.length()==1)
    {
        if(s[0]<'a') s[0]=s[0]-'A'+'a';
        else
            s[0]=s[0]+'A'-'a';
        cout<<s<<endl;
    }
    else
    {
    if (s[0]<'a')//uppercase
    {
        for(int i=1;i<s.length();i++)
        {
            if(s[i]<'a') t1++;
        }
    }
    else if (s[0]>='a')
     {
        for(int i=1;i<s.length();i++)
        {
            if(s[i]<'a') t2++;

        }
    }
    if (t1==(s.length()))
    {
        for(int i=0;i<s.length();i++)
        {
            s[i]=s[i]-'A'+'a';
        }
        cout<<s<<endl;
    }
    else if (t2==(s.length()))
    {
     s[0]=s[0]+'A'-'a';
        for(int i=1;i<s.length();i++)
        {
            s[i]=s[i]-'A'+'a';
        }
        cout<<s<<endl;
    }
    else
    cout<<s<<endl;
    }
}
