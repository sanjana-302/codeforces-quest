#include <bits/stdc++.h>
using namespace std;
void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("pin.txt", "r", stdin);
    // freopen("pout.txt", "w", stdout);
    int n;
    cin >> n;
    vector<char> s(n);
    int rs = -1, re = -1, ls = -1, le = -1;
    for (int i = 0; i < n; i++)
    {
        char tmp;
        cin >> tmp;
        if (tmp == 'R' && rs == -1)
        {
            rs = i;
        }
        if (tmp == 'L' && ls == -1)
        {
            ls = i;
        }
        s[i] = tmp;
    }
    if (rs == -1 || ls == -1)
    {
        if (rs == -1)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'L' && s[i + 1] == '.')
                {
                    cout << i + 1 << " " << ls << endl;
                    return 0;
                }
            }
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == 'R' && s[i + 1] == '.')
                {
                    cout << rs + 1 << " " << i + 1 + 1 << endl;
                    return 0;
                }
            }
        }
    }
    else
    {
        cout << rs + 1 << " " << ls << endl;
    }
    return 0;
}