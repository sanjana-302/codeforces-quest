#include <iostream>
using namespace std;
#include <string>
#include <bits/stdc++.h>

int main()
{
    string s;
    cin >> s;
    int u = 0, l = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            l++;
        }
        else
        {
            u++;
        }
    }
    if (l >= u)
    {
        // lower
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else
    {
        // upper
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }

    cout << s << endl;
}