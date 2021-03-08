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
    string s;
    cin >> s;
    s = 'a' + s;
    int ans = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        int curr = s[i];
        int next = s[i + 1];
        int temp = abs(next - curr);
        if (temp > 13)
        {
            ans += 26 - temp;
            //cout << temp << " " << ans << endl;
        }
        else
        {
            ans += temp;
            //cout << temp << " " << ans << endl;
        }
    }

    cout << abs(ans) << endl;
    return 0;
}