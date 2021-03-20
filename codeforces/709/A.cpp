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
    int s, b, d;
    cin >> s >> b >> d;
    vector<int> a(s);
    int x;
    for (auto &x : a)
        cin >> x;
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < s; i++)
    {
        if (a[i] <= b)
        {
            sum += a[i];
            if (sum > d)
            {
                sum = 0;
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}