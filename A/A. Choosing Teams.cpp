#include <iostream>
using namespace std;
int n,k,x,c,w;
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if (x+k<=5)
            c++;
        if(c==3) w++,c=0;
    }
    cout<<w<<endl;
}
