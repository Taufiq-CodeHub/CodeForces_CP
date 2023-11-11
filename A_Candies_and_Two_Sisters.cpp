//https://codeforces.com/problemset/problem/1335/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    if (n == 0 || n == 1 || n == 2)
    {
        cout << 0 << "\n";
    }
    else
    {
        if (n % 2 == 0)
        {
            cout << (n / 2) - 1 << "\n";
        }
        else
        {
            cout << n / 2 << "\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}