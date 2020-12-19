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
        string p, q;
        cin >> p;
        cin >> q;

        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int temp1 = p[i] - '0';
            int temp2 = q[i] - '0';
            a.push_back(temp1);
            b.push_back(temp2);
        }
        int red = 0;
        int blue = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                red++;
            }
            else if (a[i] < b[i])
            {
                blue++;
            }
        }
        if (red > blue)
        {
            cout << "RED" << endl;
        }
        else if (blue > red)
        {
            cout << "BLUE" << endl;
        }
        else
        {
            cout << "EQUAL" << endl;
        }
    }

    return 0;
}