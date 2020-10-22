#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    string s;
    cin >> s;
    vector<int> temp;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
        {
            temp.push_back(int(s[i] - '0'));
        }
    }
    sort(temp.begin(), temp.end());
    for (int i = 0; i < temp.size(); i++)
    {
        if (i == temp.size() - 1)
        {
            cout << temp[i] << endl;
            return 0;
        }
        cout << temp[i] << "+";
    }
}