#include <iostream>
using namespace std;
int main()
{
    int n,c,a,b,min=0;
    cin>>n>>a>>b;
    c=a+b;
    min=c;
    for(int i=1;i<n;i++)
    {
        cin>>a>>b;
        c=b+(c-a);
        if (min<c)min=c;
    }
    cout<<min<<endl;
}
