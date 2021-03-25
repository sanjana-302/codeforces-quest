#include <bits/stdc++.h>
#define CC(x) cout << (x) << endl
#define mp make_pair
#define pb push_back
using namespace std;
void solve()
{
    int n;
    cin >> n;
    unordered_map<char, int> d, e;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char temp;
            cin >> temp;
            if (i == j || i + j + 1 == n)
            {
                d[temp]++;
            }
            else
            {
                e[temp]++;
            }
        }
    }
    if (d.size() == 1 && e.size() == 1)
    {

        bool ahead = false;
        auto di = d.begin();
        auto ei = e.begin();
        if (di->first != ei->first)
        {
            int a = n + n - 1, b = n * n - a;
            if ((di->second == a && ei->second == b) || (di->second == b && ei->second == a))
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
    return;
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