#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char digit [100];
	cin>>digit;
	for(int i=0;i<strlen(digit);i+=2)
	{
		for (int j=i;j<strlen(digit);j+=2)
		{
			if (digit[i]>digit[j])
			{
				char temp = digit[j];
				digit[j]=digit[i];
				digit[i]=temp;
			}
		}
	}
	for (int i=0 ; i<strlen(digit);i++)
	{cout<<digit[i];}
	cout<<endl;
	return 0;
}