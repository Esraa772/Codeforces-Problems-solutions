#include <bits/stdc++.h>
using namespace std;

char vowels[] = {'a', 'e', 'i', 'o', 'u', 'y'};

bool isVowel(char c) {  
    for (int i = 0; i < 6; i++) {
        if (c == vowels[i]) {
            return true;
        }
    }
    return false;
}
char change (char str);
int main() {  
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        s[i] = change(s[i]);
        if (!isVowel(s[i])) {
            cout << "." << s[i];
        }
    }
     cout << "\n";
}
char change(char str)
{
	if (str>=65&&str<=90)
	{
		str =str+32;
	}
	return str;
}