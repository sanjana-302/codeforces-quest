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
    unordered_map<int, int> a;
    unordered_map<int, int> b;
    for (int i = 0; i < n; i++)
    {
        int p, q;
        cin >> p >> q;
        a[p]++;
        b[q]++;
    }
    int ans = 0;
    for (auto i : a)
    {
        if (b.find(i.first) != b.end())
        {

            ans += i.second * b[i.first];
        }
    }

    cout << ans << endl;

    return 0;
}