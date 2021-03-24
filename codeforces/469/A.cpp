#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    unordered_set<int> u;
    int k;
    for (int i = 0; i < 2; i++)
    {
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            int temp;
            cin >> temp;
            u.insert(temp);
        }
    }
    if (u.size() >= n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("pin.txt", "r", stdin);
    // freopen("pout.txt", "w", stdout);
    long long t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}