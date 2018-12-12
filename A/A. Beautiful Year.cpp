#include <iostream>
using namespace std;
int main()
{
     int y,i;
     cin>>y;
    int a,b,c,d;
           for(i=y+1;;i++)
           {
               a=i%10;
               b=(i/10)%10;
               c=(i/100)%10;
               d=(i/1000)%10;
               if(a!=b && b!=c&& c!=d && a!=c && a!=d && b!=d)
			   {
                   cout<<i<<endl;
				    break;
			   }

		   }
     return 0;
}
