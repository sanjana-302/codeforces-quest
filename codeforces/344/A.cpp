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
    vector<int> a(n);
    int x;
    for (auto &x : a)
    {
        cin >> x;
    }
    long long count = 1;
    for (long long i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}