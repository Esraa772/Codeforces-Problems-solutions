#include <iostream>
#include <set>
#include <cmath>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    char ch;
    set<char> s;
    while (cin >> ch)
    {
        if (isalpha(ch)) s.insert(ch);
    }
    
  cout << s.size() << endl;
  return 0;
}
