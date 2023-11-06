//https://codeforces.com/contest/318/problem/A

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    long long n, k;
    cin >> n >> k;

    long long half = n / 2;
    if (n % 2 == 0)
    {
        if (half >= k)
        {
            cout << 2 * k - 1 << "\n";
        }
        else
        {
            cout << (k - half) * 2 << "\n";
        }
    }
    else
    {
        if (k <= (half + 1))
        {
            cout << 2 * k - 1 << "\n";
        }
        else
        {
            cout << (k - (half + 1)) * 2 << "\n";
        }
    }

    // vector<long long> v;
    // for (long long i = 1; i <= n; i+=2) {
    //     v.push_back(i);
    // }
    // for (long long i = 2; i <= n; i+=2) {
    //     v.push_back(i);
    // }
    // v.shrink_to_fit();

    // cout << v.at(k-1)  << "\n";

    return 0;
}