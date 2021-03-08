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

    vector<long long> a(4);
    long long x;
    for (auto &x : a)
        cin >> x;
    string s;
    cin >> s;
    long long ans = 0;
    for (long long i = 0; i < s.size(); i++)
    {
        long long y = s[i] - '0';
        ans += a[y - 1];
    }
    cout << ans << endl;
    return 0;
}