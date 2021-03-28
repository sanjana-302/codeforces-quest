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
    long long n, top;
    cin >> n;
    cin >> top;
    while (n--)
    {
        unordered_set<int> check{1, 2, 3, 4, 5, 6};
        int p, q;
        cin >> p >> q;
        check.erase(p);
        check.erase(q);
        check.erase(abs(7 - p));
        check.erase(abs(7 - q));
        int k = 0;
        if (check.find(top) != check.end() && check.find(abs(top - 7)) != check.end())
        {
            k++;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}