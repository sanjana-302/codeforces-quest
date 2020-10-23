#include <iostream>
using namespace std;
int main()
{
    int n, ans;
    cin >> n;
    if (n < 5)
    {
        ans = 1;
    }
    else if (n % 5)
    {
        ans = n / 5 + 1;
    }
    else
    {
        ans = n / 5;
    }

    cout << ans << endl;
}