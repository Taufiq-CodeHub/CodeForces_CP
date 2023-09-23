//https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    string a[n];
    int cnt = 0;
    // int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] == "X++" || a[i] == "++X")
        {
            cnt++;
        }
        else if (a[i] == "X--" || a[i] == "--X")
        {
            cnt--;
        }
    }

    cout << cnt;

    return 0;
}