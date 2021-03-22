#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_set<char> s1;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    for (int i = 0; i < s.size(); i++)
    {
        s1.insert(s[i]);
    }
    if (s1.size() >= 26)
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