#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int count = 0;
    while (T--)
    {
        int l, m, n;
        cin >> l >> m >> n;
        if (l + m + n >= 2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}