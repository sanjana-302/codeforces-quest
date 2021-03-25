#include <bits/stdc++.h>
#define CC(x) cout << (x) << endl
#define mp make_pair
#define pb push_back
using namespace std;
void solve()
{
    long long n;

    cin >> n;
    if (n % 2)
    {
        cout << -1 * (n + 1) / 2 << endl;
    }
    else
    {
        cout << n / 2 << endl;
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