#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> cnt(3, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[x % 3]++;
    }
    int ans = 0;
    while (*min_element(cnt.begin(), cnt.end()) != (n / 3))
    {
        for (int i = 0; i < 3; i++)
        {
            if (cnt[i] > (n / 3))
            {
                ans++;
                cnt[i]--;
                cnt[(i + 1) % 3]++;
            }
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}