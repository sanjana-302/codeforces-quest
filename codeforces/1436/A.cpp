#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n, m;
        cin >> n >> m;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }

        if (sum == m)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}