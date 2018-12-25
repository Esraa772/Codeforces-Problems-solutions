//============================================================================
// Name        : .cpp
// Author      : Esraa Abdelnaby
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
	string st;
	set<char>s;
	    cin>>st;
	    int len =st.length();
	    for(int i=0;i<len;i++)
	    {
	       s.insert(st[i]);
	    }
	    if (s.size()&1) cout<<"IGNORE HIM!\n";
	    else cout<<"CHAT WITH HER!\n";

}