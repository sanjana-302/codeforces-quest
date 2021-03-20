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
    int n;
    cin >> n;
    int x;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int b = x - 1 - 1;
        int af = x + 1 - 1;
        if (b > -1)
        {
            a[b] += y - 1;
        }
        if (af < n)
        {
            a[af] += a[x - 1] - y;
        }

        a[x - 1] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}