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
    cin >> n;
    long long cnt = 0;
    while (n)
    {
        if (n % 2)
        {
            cnt++;
        }
        n /= 2;
    }
    cout << cnt << endl;
    return 0;
}