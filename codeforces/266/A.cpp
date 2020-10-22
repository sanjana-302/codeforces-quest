#include <iostream>
using namespace std;
#include <string>

int main()
{
    string s;
    int n;
    cin >> n;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
    }

    cout << count;
}