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
    unsigned long long n;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    string ans = "";
    while (n)
    {
        int temp = n % 10;
        if (9 - temp < temp)
        {
            ans = to_string(9 - temp) + ans;
        }
        else
        {
            ans = to_string(temp) + ans;
        }
        n /= 10;
    }
    if (ans[0] == '0')
    {
        ans[0] = '9';
    }
    cout << ans << endl;
    return 0;
}