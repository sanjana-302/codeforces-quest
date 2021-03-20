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

    int a1, b;
    cin >> a1 >> b;
    vector<string> a{"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
    int great;
    if (a1 > b)
    {
        great = a1;
    }
    else
    {
        great = b;
    }

    cout << a[6 - great] << endl;

    return 0;
}