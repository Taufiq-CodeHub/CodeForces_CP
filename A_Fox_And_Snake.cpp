//https://codeforces.com/problemset/problem/510/A

#include <bits/stdc++.h>
using namespace std;

void hash_print(int x)
{
    for (int i = 0; i < x; i++)
    {
        cout << "#";
    }
    cout << "\n";
}

void dot_hash_print(int x)
{
    for (int i = 0; i < x; i++)
    {
        i == x - 1 ? cout << "#" : cout << ".";
    }
    cout << "\n";
}

void hash_dot_print(int x)
{
    for (int i = 0; i < x; i++)
    {
        i == 0 ? cout << "#" : cout << ".";
    }
    cout << "\n";
}

int main()
{

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, m, j = 1;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0) hash_print(m);

        if (i == ((4 * j) - 2)) dot_hash_print(m), j++;

        if (i % 4 == 0) hash_dot_print(m);
    }

    return 0;
}