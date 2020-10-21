// Do again
#include <iostream>
using namespace std;
#include <string>

int main()
{
    string s, o = "";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' &&
            s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] != 'Y' && s[i] != 'y')
        {
            o = o + s[i];
        }
    }
    for (int i = 0; i < o.length(); i++)
    {
        if (o[i] >= 'A' && o[i] <= 'Z')
        {
            o[i] = o[i] + 32;
        }
    }
    for (int i = 0; i < o.size(); i++)
    {
        cout << '.' << o[i];
    }
}