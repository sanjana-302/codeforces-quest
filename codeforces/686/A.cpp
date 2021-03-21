#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, s;
    cin >> n >> s;
    long long sum = s;
    long long dis = 0;
    while (n--)
    {
        char a;
        long long d;
        cin >> a >> d;
        if (a == '+')
        {
            sum += d;
        }
        else
        {
            if (sum < d)
            {
                dis++;
            }
            else
            {
                sum = sum - d;
            }
        }
    }
    cout << sum << " " << dis << "\n";
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