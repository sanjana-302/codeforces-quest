#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("pin.txt", "r", stdin);
    // freopen("pout.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> um;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            um[temp]++;
        }
        if (um.size() == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            auto val = um.begin();
            cout << n - val->second << endl;
        }
    }
    return 0;
}