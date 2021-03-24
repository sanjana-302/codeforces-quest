#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    unordered_map<string, int> s;
    while (n--)
    {
        string p;
        cin >> p;
        s[p]++;
    }
    int max = -1;
    string ans;
    for (auto i : s)
    {
        if (i.second > max)
        {
            max = i.second;
            ans = i.first;
        }
    }

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