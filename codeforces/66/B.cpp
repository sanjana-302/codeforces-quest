#include <bits/stdc++.h>
using namespace std;
int a[1001];
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int cur = 1;
        for (int j = i + 1; j < n && a[j] <= a[j - 1]; j++)
            cur++;

        for (int j = i - 1; j >= 0 && a[j] <= a[j + 1]; j--)
            cur++;

        ans = max(ans, cur);
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