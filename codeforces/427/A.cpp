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
    for (long long &x : a)
        cin >> x;
    long long sum = 0;
    long long count = 0;
    for (long long i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum >= 0)
        {
            continue;
        }
        else
        {
            sum = 0;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}