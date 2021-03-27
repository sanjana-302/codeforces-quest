#include <bits/stdc++.h>
#define CC(x) cout << (x) << endl
#define mp make_pair
#define pb push_back
using namespace std;
void solve()
{
    unordered_map<string, int> um;
    um["Tetrahedron"] = 4;
    um["Cube"] = 6;
    um["Octahedron"] = 8;
    um["Dodecahedron"] = 12;
    um["Icosahedron"] = 20;
    int n;
    cin >> n;
    int ans = 0;
    while (n--)
    {
        string shape;
        cin >> shape;
        ans += um[shape];
    }
    cout << ans << endl;
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