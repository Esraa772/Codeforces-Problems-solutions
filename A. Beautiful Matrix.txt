#include <iostream>
using namespace std;

int main()
{
    int x,posx=3,posy=3,nsteps;
    for (int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            cin>>x;
            if (x==1)
            {

                posx-=i;posy-=j;
                if (posx<0){posx*=-1;}
                if (posy<0){posy*=-1;}
                nsteps= posx+posy;
            }
        }
    }
    cout<<nsteps<<endl;
                return 0;
}