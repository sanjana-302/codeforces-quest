#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int x;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    int p = a[0], q = a[n - 1];
    for (int i = 0; i < n; i++)
    {
        int ma;
        int mi;
        if (i == 0)
        {
            ma = abs(q - a[i]);
            mi = abs(a[i + 1] - a[i]);
        }
        else if (i == n - 1)
        {
            ma = abs(p - a[i]);
            mi = abs(a[i - 1] - a[i]);
        }
        else
        {
            ma = max(abs(p - a[i]), abs(q - a[i]));
            mi = min(abs(a[i + 1] - a[i]), abs(a[i - 1] - a[i]));
        }
        cout << mi << " " << ma << endl;
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