#include <iostream>
using namespace std;
#include <string>
int main()
{
    int n, m;
    cin >> n >> m;

    int rem = n % 2;
    if (rem == 0)
    {
        int ans = n / 2;
        ans *= m;
        cout << ans << endl;
    }
    else
    {
        int ans = n / 2;
        ans *= m;
        if (m % 2 == 0)
        {
            m = m / 2;
            ans += m;
        }
        else
        {
            m = (m - 1) / 2;
            ans += m;
        }
        cout << ans << endl;
    }

    return 0;
}