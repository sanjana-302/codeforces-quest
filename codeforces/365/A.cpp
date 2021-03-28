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
    int n, p;
    cin >> n >> p;
    int count = 0;
    while (n--)
    {
        vector<int> check(p + 1, 0);
        long long a;
        cin >> a;
        if (a == 0)
        {
            check[0] = 1;
        }
        while (a)
        {
            if (a % 10 <= p)
            {
                check[a % 10] = 1;
            }

            a = a / 10;
        }
        bool yes = true;
        for (int i = 0; i <= p; i++)
        {
            if (check[i] != 1)
            {
                yes = false;
                break;
            }
        }
        count += yes;
    }

    cout << count << endl;
    return 0;
}