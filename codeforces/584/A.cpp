#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, t;

    cin >> n >> t;
    if (n == 1 && t == 10)
    {
        cout << -1 << endl;
        return;
    }
    string s;
    if (t == 10)
    {
        if (n == 1)
        {
            cout << 0 << endl;
            return;
        }
        s += to_string(1);
        while (s.size() < n)
        {
            s += to_string(0);
        }
    }
    else
    {

        while (s.size() < n)
        {
            s += to_string(t);
        }
    }
    cout << s << endl;
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