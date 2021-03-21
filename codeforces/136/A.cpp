#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    unordered_map<int, int> s;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        s[temp] = i + 1;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << s[i] << " ";
    }
    cout << "\n";
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