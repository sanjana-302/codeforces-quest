#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool callme(ll b[], ll n)
{
    ll sum = 0;
    int i, j;

    for (i = 0; i < n; i++)
        sum += b[i];

    if (sum % 2 != 0)
        return false;

    bool p[sum / 2 + 1][n + 1];

    for (i = 0; i <= n; i++)
        p[0][i] = true;

    for (i = 1; i <= sum / 2; i++)
        p[i][0] = false;

    for (i = 1; i <= sum / 2; i++)
    {
        for (j = 1; j <= n; j++)
        {
            p[i][j] = p[i][j - 1];
            if (i >= b[j - 1])
                p[i][j] = p[i][j] || p[i - b[j - 1]][j - 1];
        }
    }

    return p[sum / 2][n];
}

int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (callme(a, n))
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
}