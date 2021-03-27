#include <bits/stdc++.h>
#define CC(x) cout << (x) << endl
#define mp make_pair
#define pb push_back
using namespace std;
void solve()
{
    int n, p;
    cin >> n >> p;
    int prime = -1;
    for (int i = n; i < 50; i++)
    {
        bool flag = true;
        if (i == n)
        {
            continue;
        }
        else
        {

            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            prime = i;
            break;
        }
    }
    if (prime == p)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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