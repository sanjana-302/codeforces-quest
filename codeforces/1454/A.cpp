#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
            //cout << a[i] << endl;
        }

        // cout << endl;
        if (n % 2 == 0)
        {
            reverse(a.begin(), a.end());
            for (int i = 0; i < n; i++)
            {

                cout << a[i] << " ";
            }
        }
        else
        {

            reverse(a.begin(), a.end());
            int mid = n / 2;
            swap(a[mid], a[0]);
            for (int i = 0; i < n; i++)
            {

                cout << a[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}