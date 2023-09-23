// https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    string s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++)
    {
        int lt = s[i].length();

        if (s[i].length() <= 10)
        {
            cout << s[i] << endl;
        }
        else
        {
            cout << s[i].at(0) << lt - 2 << s[i].back() << endl;
        }
    }

    // cout<<" "<<s[0];

    return 0;
}