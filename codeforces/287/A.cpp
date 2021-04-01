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
    vector<vector<char>> s(6, vector<char>(6));
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {

            if (i == 0 || j == 0 || i == 5 || j == 5)
            {
                s[i][j] = 'o';
                continue;
            }
            char temp;
            cin >> temp;
            s[i][j] = temp;
        }
    }
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if ((s[i][j] == s[i + 1][j] || s[i][j] == s[i - 1][j]) && (s[i][j] == s[i][j + 1] || s[i][j] == s[i][j - 1]))
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}