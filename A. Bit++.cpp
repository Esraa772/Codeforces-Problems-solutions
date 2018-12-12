#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,s=0;string x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if (x[0]=='+'||x[1]=='+'){ s++;} //x is of length 3 x={'x','+','+''}
        else {s--;}
    }
    cout<<s<<endl;
}