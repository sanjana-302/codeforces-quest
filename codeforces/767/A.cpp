#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n + 1, -1);
    long long greatest = n;
    for (long long i = 0; i < n; i++)
    {
        long long temp;
        cin >> temp;
        a[temp] = temp;
        if (temp == greatest)
        {
            for (long long i = temp; i > 0; i--)
            {
                if (a[i] != -1)
                {
                    cout << a[i] << " ";
                }
                else
                {

                    greatest = i;
                    //cout << "greatest " << greatest << endl;
                    break;
                }
            }
        }
        else
        {
            cout << " ";
        }
        cout << endl;
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