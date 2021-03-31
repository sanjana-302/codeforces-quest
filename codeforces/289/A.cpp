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
    int n, k;
    cin >> n >> k;
    int value = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        value += b - a + 1;
    }
    //cout << value << endl;
    int ans = 0;
    int i = 1;
    while (value > ans)
    {
        ans = k * i;
        i++;
    }

    cout << ans - value << endl;

    return 0;
}