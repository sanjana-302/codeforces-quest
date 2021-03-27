#include <bits/stdc++.h>
#define CC(x) cout << (x) << endl
#define mp make_pair
#define pb push_back
using namespace std;
unsigned long long gcd(unsigned long long a, unsigned long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void solve()
{
    unsigned long long l, r;
    cin >> l >> r;
    if (r - l < 2)
    {
        cout << -1 << endl;
        return;
    }
    if ((r - l) == 2)
    {
        unsigned long long flag = gcd(l, l + 2);
        //cout << flag << endl;
        if (flag == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            //cout << "r" << endl;
            cout << l << " " << l + 1 << " " << l + 2 << endl;
        }
    }
    else
    {
        if (l % 2 == 0)
        {
            cout << l << " " << l + 1 << " " << l + 2 << endl;
        }
        else
        {
            cout << l + 1 << " " << l + 2 << " " << l + 3 << endl;
        }
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