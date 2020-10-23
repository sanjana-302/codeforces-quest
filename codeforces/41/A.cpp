#include <iostream>
using namespace std;
#include <string>

int main()
{
    string s;
    cin >> s;
    string t;
    cin >> t;
    if (s.length() != t.length())
    {
        // no
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[s.length() - 1 - i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}