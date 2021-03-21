#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int cnt = 1;
    string s;
    while (cnt <= n)
    {
        for (int i = 0; i < k; i++)
        {
            if (cnt <= n)
            {
                int x = 'a' + i;
                s += x;
                cnt++;
            }
        }
    }

    cout << s << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("pin.txt", "r", stdin);
    // freopen("pout.txt", "w", stdout);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}