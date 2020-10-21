#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    while (n--)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    if (a[0] == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < k; i++)
    {
        if (a.at(i) == 0)
        {
            cout << i << endl;
            return 0;
        }
    }

    int i = k;
    while (a[i - 1] == a[i])
    {

        i++;
    }
    cout << i << endl;
}