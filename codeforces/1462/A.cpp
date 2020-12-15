#include <bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                cout << arr[i] << " " << arr[n - i - 1] << " ";
            }
        }
        else
        {
            for (int i = 0; i <= n / 2; i++)
            {
                if (i == n / 2)
                {
                    cout << arr[i];
                }
                else
                {
                    cout << arr[i] << " " << arr[n - i - 1] << " ";
                }
            }
        }

        cout << endl;
    }
}