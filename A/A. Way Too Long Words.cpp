#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>str;
		if (str.size()<=10)
		{
			cout<<str<<endl;
		}
		else 
		{
			cout<<str[0]<<str.size()-2<<str[str.size()-1]<<endl;
		}
	}
	return 0;
}s
