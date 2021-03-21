#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int x;
    for (auto &x : a)
        cin >> x;
    int c1 = 0, c2 = 0, c3 = 0;
    vector<int> one, two, three;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            c1++;
            one.push_back(i);
        }
        else if (a[i] == 2)
        {
            c2++;
            two.push_back(i);
        }
        else
        {
            c3++;
            three.push_back(i);
        }
    }
    int ans = min(c1, min(c2, c3));
    cout << ans << "\n";
    for (int i = 0; i < ans; i++)
    {
        cout << one[i] + 1 << " " << two[i] + 1 << " " << three[i] + 1 << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("pin.txt", "r", stdin);
    // freopen("pout.txt", "w", stdout);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}