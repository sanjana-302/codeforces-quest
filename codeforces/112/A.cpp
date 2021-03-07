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
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    transform(p.begin(), p.end(), p.begin(), ::toupper);
    if (s > p)
        cout << 1;
    else if (s < p)
        cout << -1;
    else
        cout << 0;
    cout << endl;
    return 0;
}