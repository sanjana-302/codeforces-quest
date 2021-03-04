#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("pin.txt", "r", stdin);
    // freopen("pout.txt", "w", stdout);
    int n, q;
    cin >> n >> q;
    int zero = 0, one = 0;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
        if (temp)
            one++;
        else
            zero++;
    }
    while (q--)
    {
        int type, index;
        cin >> type >> index;
        if (type == 1)
        {
            if (a[index - 1])
            {
                zero++;
                one--;
                a[index - 1] = 0;
            }
            else
            {
                zero--;
                one++;
                a[index - 1] = 1;
            }
        }
        else
        {
            if (index <= one)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}