#include <iostream>
using namespace std;
int n,m;bool b=1;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        if (i%2)
        {
            for(int j=0;j<m;j++)
                cout<<"#";

        }
        else
        {
            if(b)
            {
                for(int j=0;j<m-1;j++)
                    cout<<".";
                cout<<"#";
            }
            else
            {
                cout<<"#";
                for(int j=0;j<m-1;j++)
                    cout<<".";
            }
            b=!b;
        }
        cout<<endl;
    }
}