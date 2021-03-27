#include <bits/stdc++.h>
#define CC(x) cout << (x) << endl
#define mp make_pair
#define pb push_back
using namespace std;
void solve()
{
    double n, m, a;
    cin >> n >> m >> a;
    unsigned long long ans = ceil(n / a) * ceil(m / a);
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