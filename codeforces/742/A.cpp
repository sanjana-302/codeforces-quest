#include <bits/stdc++.h>
#define CC(x) cout << (x) << endl
#define mp make_pair
#define pb push_back
using namespace std;
void solve()
{
    long long n;

    cin >> n;
    if (n == 0)
    {
        cout << 1 << endl;
        return;
    }
    n = n % 4;
    vector<int> ans{6, 8, 4, 2};
    cout << ans[n] << endl;
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