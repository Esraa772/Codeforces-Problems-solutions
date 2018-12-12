#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
 {
     string word;
     cin>>word;
     for ( int i=0 ;i<word.length();i++)
     {
        if (word[i] =='h')
        {
            for (int j=i+1;j<word.length();j++)
            {
                if (word[j]=='e')
                {
                    for (int k=j+1;k<word.length();k++)
                    {
                        if (word[k]=='l')
                        {
                            for (int m=k+1;m<word.length();m++)
                            {
                                if (word[m]=='l')
                                {
                                    for (int n=m+1;n<word.length();n++)
                                    {
                                        if (word[n]=='o')
                                        {
                                            cout<<"YES\n";
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }

                    }
                }

            }
        }
     }
     cout<<"NO\n";
     return 0;
 }
