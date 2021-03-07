#include <bits/stdc++.h>
using namespace std;
void solve()
{
}
int main()
{
    int n, h;
    cin >> n >> h;
    vector<int> a(n);
    int x;
    int c = 0;
    for (auto &x : a)
    {
        cin >> x;
        if ((x - h) > 0)
        {
            c += 2;
        }
        else
        {
            c++;
        }
    }
    cout << c << endl;

    return 0;
}