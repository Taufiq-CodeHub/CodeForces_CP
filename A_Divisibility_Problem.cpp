//https://codeforces.com/problemset/problem/1328/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;
    if (a % b == 0)
        cout << 0 << "\n";
    else
        cout << (((a / b) + 1) * b) - a << "\n";
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

/*
// ############# this gest tle ##########

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, moves = 0;
    cin >> a >> b;

    while (a % b != 0)
    {
        a++;
        moves++;
    }
    cout << moves << "\n";
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

*/