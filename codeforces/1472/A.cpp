#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b, n;
        cin >> a >> b >> n;
        int num = 1;
        while (a % 2 == 0)
        {
            a /= 2;
            num *= 2;
        }
        while (b % 2 == 0)
        {
            b /= 2;
            num *= 2;
        }
        if (num >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}