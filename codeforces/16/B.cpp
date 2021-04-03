#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long k, m;
    cin >> k >> m;
    vector<pair<long long, long long>> a;
    for (long long i = 0; i < m; i++)
    {
        long long p, q;
        cin >> p >> q;
        a.push_back(make_pair(q, p));
    }
    sort(a.begin(), a.end());
    long long ans = 0;
    for (auto i = m - 1; i >= 0; i--)
    {
        if (k > 0)
        {
            if (k >= a[i].second)
            {
                ans += a[i].second * a[i].first;
                k -= a[i].second;
            }
            else
            {
                ans += k * a[i].first;
                break;
            }
        }
    }
    cout << ans << endl;
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