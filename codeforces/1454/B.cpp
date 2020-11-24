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
        vector<int> arr(n);
        map<int, int> order;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            order[arr[i]]++;
        }
        bool flag = true;
        for (auto i = order.begin(); i != order.end(); i++)
        {
            if (!flag)
            {
                break;
            }
            if (i->second == 1 && flag)
            {
                for (int j = 0; j < n; j++)
                {
                    if (arr[j] == i->first)
                    {
                        cout << j + 1 << endl;
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (flag)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}