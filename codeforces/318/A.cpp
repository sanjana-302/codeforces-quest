#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k;
    cin >> n >> k;
    long long ans;
    if (n % 2)
    {
        long long mid = (n + 1) / 2;
        if (k <= mid)
        {
            ans = 2 * (k - 1) + 1;
        }
        else
        {
            ans = 2 * (k - mid);
        }
    }
    else
    {
        long long mid = n / 2;
        if (k <= mid)
        {
            ans = 2 * (k - 1) + 1;
        }
        else
        {
            ans = 2 * (k - mid);
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