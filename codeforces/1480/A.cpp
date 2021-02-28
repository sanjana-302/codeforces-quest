#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("pin.txt", "r", stdin);
    // freopen("pout.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char x = 'a', y = 'z';
        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 == 0)
            {
                if (s[i] != x)
                {
                    s[i] = x;
                }
                else
                {
                    s[i] = 'b';
                }
            }
            else
            {
                if (s[i] != y)
                {
                    s[i] = y;
                }
                else
                {
                    s[i] = 'y';
                }
            }
        }

        cout << s << endl;
    }
    return 0;
}