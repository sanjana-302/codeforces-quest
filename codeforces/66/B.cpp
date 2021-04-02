#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 2);
    a[0] = 100000;
    a[n + 1] = 100000;
    //int x;
    for (int i = 1; i < n + 1; i++)
    {
        int tmp;
        cin >> tmp;
        a[i] = tmp;
    }
    int max = -1;
    for (int i = 1; i < n + 1; i++)
    {
        int left = 1;
        int right = 1;
        for (int j = i; j < n + 1; j++)
        {
            if (a[j + 1] > a[j])
            {
                right += j - i;
                break;
            }
        }
        for (int j = i; j >= 1; j--)
        {
            if (a[j - 1] > a[j])
            {
                left += i - j;
                break;
            }
        }
        if (left + right > max)
        {
            max = left + right - 1;
        }
        //cout << right << endl;
    }

    cout << max << endl;
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