#include <bits/stdc++.h>
using namespace std;
void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("pin.txt", "r", stdin);
    // freopen("pout.txt", "w", stdout);
    string s;
    string p;
    cin >> s;
    cin >> p;
    string b, a;
    int n = s.size();
    bool left = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '|')
        {
            left = false;

            continue;
        }
        if (left)
        {
            b += s[i];
        }
        else
        {
            a += s[i];
        }
    }
    int i = 0;
    while (i < p.size())
    {
        if (b.size() < a.size())
        {
            b += p[i];
        }
        else
        {
            a += p[i];
        }
        i++;
    }

    if (a.size() != b.size() || i != p.size())
    {
        cout << "Impossible" << endl;
        return 0;
    }

    cout << b << "|" << a << endl;

    return 0;
}