#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(b.begin(), b.end());
        int s = 0, e = n - 1;
        while (k--)
        {
            if (a[s] < b[e])
            {
                swap(a[s], b[e]);
                s++;
                e--;
            }
            else
            {
                break;
            }
        }

        cout << accumulate(a.begin(), a.end(), 0) << endl;
    }

    return 0;
}