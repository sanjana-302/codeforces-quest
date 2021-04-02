#include <bits/stdc++.h>
using namespace std;
int a[1001];
void solve()
{
    int n, x;
    cin >> n >> x;
    x--;
    int ans = 0;

    int i = x - 1, j = x + 1;
    //cout << i << " " << j << endl;
    for (int k = 0; k < n; k++)
    {
        cin >> a[k];
    }
    if (a[x] == 1)
        ans++;
    while (i >= 0 && j < n)
    {
        if (a[i] == a[j] && a[i] == 1)
        {
            ans += 2;
        }
        i--;
        j++;
    }
    //cout << i << " " << j << endl;
    if (i >= 0)
    {
        for (int k = i; k >= 0; k--)
        {
            if (a[k] == 1)
            {
                ans++;
            }
        }
    }
    if (j < n)
    {
        for (int k = j; k < n; k++)
        {
            if (a[k] == 1)
            {
                ans++;
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