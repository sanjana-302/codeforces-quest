#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    while (n--)
    {
        int b, a1;
        cin >> b >> a1;
        if (a1 != b)
        {
            cout << "rated" << endl;
            return;
        }
        else
        {
            a.push_back(b);
        }
    }

    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            cout << "unrated" << endl;
            return;
        }
    }

    cout << "maybe" << endl;
    return;
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