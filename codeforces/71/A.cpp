#include <iostream>
using namespace std;
#include <string>
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int n = s.length();
        if (n > 10)
        {
            string output = s[0] + to_string(n - 2) + s[n - 1];
            cout << output << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
}