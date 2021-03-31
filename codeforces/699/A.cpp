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
    long long n;
    string s;

    cin >> n;
    vector<long long> a(n);
    cin >> s;
    long long x;
    for (auto &x : a)
    {
        cin >> x;
    }

    long long ans = -1;
    for (long long i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'R' && s[i + 1] == 'L')
        {
            long long temp = abs(a[i] - a[i + 1]) / 2;
            if (ans == -1 || temp < ans)
            {
                ans = temp;
            }
        }
    }
    cout << ans << endl;
    bool var = true;
    return 0;
}