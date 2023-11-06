//https://codeforces.com/contest/467/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, room = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long people, capacity;
        cin >> people >> capacity;
        if ((capacity - people) >= 2) room++;
    }

    cout << room;

    return 0;
}