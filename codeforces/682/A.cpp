#include <bits/stdc++.h>
using namespace std;
void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("pin.txt", "r", stdin);
    // freopen("pout.txt", "w", stdout);
    long long n, m;
    cin >> n >> m;
    if (n > m)
    {
        swap(n, m);
    }
    vector<long long> rem(5, 0);
    for (long long i = 1; i <= m; i++)
    {
        rem[i % 5]++;
    }
    long long ans = 0;
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 0; j <= 4; j++)
        {
            if (((i % 5) + j) % 5 == 0)
            {
                ans += rem[j];
            }
        }
    }
    cout << ans << endl;
    return 0;
}