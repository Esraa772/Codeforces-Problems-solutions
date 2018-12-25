#include <iostream>
using namespace std;
int main()
{
   int a,b,c;
   cin>>a>>b>>c;
  int x= a+b+c;
  int y=a+(b*c);
  int z=(a*b)+c;
  int w=a*b*c;
  int m=(a+b)*c;
  int n=a*(b+c);
  if (x>y&&x>z&&x>w&&x>m&&x>n) cout<<x<<endl;
  else if (y>x&&y>z&&y>w&&y>m&&y>n) cout<<y<<endl;
  else if (z>x&&z>y&&z>w&&z>m&&z>n) cout<<z<<endl;
  else if (w>x&&w>y&&w>z&&w>m&&w>n) cout<<w<<endl;
  else if (m>x&&m>y&&m>z&&m>w&&m>n) cout<<m<<endl;
  else cout<<n<<endl;
}
