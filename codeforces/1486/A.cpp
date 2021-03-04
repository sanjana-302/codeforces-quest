#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<long long> a(n);
    long long x;
    for (auto &x : a)
    {
        cin >> x;
    }
    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }
    long long need = 0;
    long long here = 0;
    for (int i = 0; i < n; i++)
    {
        need += i;
        here += a[i];
        if (need > here)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("pin.txt", "r", stdin);
    // freopen("pout.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}