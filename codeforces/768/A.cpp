#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    unordered_map<long long, long long> s;
    long long mi = 10000000001, ma = -1;
    for (long long i = 0; i < n; i++)
    {
        long long temp;
        cin >> temp;
        if (temp < mi)
        {
            mi = temp;
        }
        if (temp > ma)
        {
            ma = temp;
        }
        s[temp]++;
    }
    if (int(s.size()) - 2 <= 0)
    {
        //cout << "run" << endl;
        cout << 0 << endl;
        return;
    }
    long long ans = n - s[mi] - s[ma];
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