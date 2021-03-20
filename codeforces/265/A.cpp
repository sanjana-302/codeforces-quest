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

    string s, p;
    cin >> s;
    cin >> p;
    int i = 0, j = 0;
    while (j < p.size())
    {
        if (s[i] == p[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }

    cout << i + 1 << endl;

    return 0;
}