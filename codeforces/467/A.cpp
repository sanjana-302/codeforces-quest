#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        int l, a;
        cin >> l >> a;
        if (a - l >= 2)
        {
            count++;
        }
    }

    cout << count << endl;
}