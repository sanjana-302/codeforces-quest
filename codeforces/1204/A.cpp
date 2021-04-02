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
    cin >> s;
    long long ans = s.size();
    bool hasOne = false;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            hasOne = true;
            break;
        }
    }
    if (hasOne)
    {
        cout << (ans + 1) / 2 << endl;
    }
    else
    {
        cout << ans / 2 << endl;
    }
    return 0;
}