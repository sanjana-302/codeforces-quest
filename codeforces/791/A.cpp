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
    int n, m;
    cin >> n >> m;
    int count = 0;
    while (n <= m)
    {
        n = n * 3;
        m = m * 2;
        count++;
    }
    cout << count << endl;
    return 0;
}