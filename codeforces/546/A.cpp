#include <iostream>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int ans = w * (w + 1) * k;
    ans = ans / 2;
    int f_ans = ans - n;
    if (f_ans > 0)
    {
        cout << f_ans;
    }
    else
    {
        cout << 0;
    }
}