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
    vector<long long> a(n);
    long long x;
    for (auto &x : a)
        cin >> x;
    long long p1 = 0;
    long long p2 = n - 1;
    long long sum1 = 0;
    long long sum2 = 0;
    bool add = true;
    while (p1 <= p2)
    {

        if (add)
        {
            sum1 += max(a[p1], a[p2]);
            add = false;
        }
        else if (!add)
        {
            sum2 += max(a[p1], a[p2]);
            add = true;
        }

        if (a[p1] > a[p2])
        {
            p1++;
        }
        else
        {
            p2--;
        }
    }

    cout << sum1 << " " << sum2 << endl;

    return 0;
}