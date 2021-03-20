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
    long long p, q;
    cin >> p >> q;
    long long ans = 10;
    for (long long i = 1; i < 10; i++)
    {
        long long temp = p * i;
        if ((temp - q) % 10 == 0 || temp % 10 == 0)
        {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}