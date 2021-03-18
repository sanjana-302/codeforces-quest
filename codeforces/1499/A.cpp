#include <bits/stdc++.h>
using namespace std;
void solve()
{
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, ding, dang;
        cin >> n >> ding >> dang;
        long long omi, cremus;
        cin >> omi >> cremus;
        omi = 2 * omi;
        cremus = 2 * cremus;
        long long w = ding + dang;
        long long g = 2 * n - w;
        if (w >= omi && g >= cremus)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}