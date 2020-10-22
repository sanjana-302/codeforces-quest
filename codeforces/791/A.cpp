#include <iostream>
using namespace std;

int main()
{

    int l, m;
    cin >> l >> m;
    int c = 0;
    while (1)
    {
        c++;
        l *= 3;
        m *= 2;
        if (l > m)
        {
            break;
        }
    }

    cout << c;
}