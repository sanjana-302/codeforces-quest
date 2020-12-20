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
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        int count = 0;
        int i;
        bool flag = true;
        if (n == 1 && s[0] != ')')
        {
            cout << "No" << endl;
            flag = false;
        }

        for (i = 0; i < n; i++)
        {
            if (s[i] == ')' && s[i + 1] == ')')
            {
                count++;
            }
            else
            {
                break;
            }
        }

        count++;
        i++;
        //cout << count << i << endl;
        if (flag)
        {
            if (count > n - i)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}