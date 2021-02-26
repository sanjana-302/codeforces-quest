#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("pin.txt", "r", stdin);
    // freopen("pout.txt", "w", stdout);
    long long t;
    cin >> t;
    while (t--)
    {
        //cout << "run" << endl;
        long double p, a, b, c;
        cin >> p >> a >> b >> c;
        long long A = ceil(p / a) * a;
        long long B = ceil(p / b) * b;
        long long C = ceil(p / c) * c;
        long long ans = min(A, min(B, C)) - p;
        cout << ans << endl;
    }

    return 0;
}