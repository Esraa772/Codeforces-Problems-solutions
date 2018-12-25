#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
long long a,b,c,x,y;
main ()
{
    cin>>a>>b>>c;
    x=a*b*c;
    y=sqrt(x);
    cout<<4*(y/a+y/b+y/c);
   
}
