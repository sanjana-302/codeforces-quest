#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    string ans = "";
    int i = 0;
    while (i < s.size())
    {
        if (i < s.size() && i + 1 < s.size() && i + 2 < s.size() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            ans += " ";
            i += 3;
        }
        else
        {
            ans += s[i];
            i++;
        }
    }

    int index = -1;

    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] == 32)
        {
            continue;
        }
        else
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        cout << " " << endl;
    }

    for (int i = index; i < ans.size(); i++)
    {
        if (i + 1 < ans.size() && ans[i] == ans[i + 1] && ans[i] == 32)
        {
            continue;
        }
        cout << ans[i];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("pin.txt", "r", stdin);
    // freopen("pout.txt", "w", stdout);
    long long t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}