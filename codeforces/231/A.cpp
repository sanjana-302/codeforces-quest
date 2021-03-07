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
    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            int temp;
            cin >> temp;
            sum += temp;
        }
        if (sum >= 2)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}