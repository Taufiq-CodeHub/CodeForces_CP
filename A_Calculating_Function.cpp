//https://codeforces.com/problemset/problem/486/A

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long x;
    cin >> x;

    long long n, m;
    if (x % 2 == 0)
    {
        n = x / 2;
        cout << (n + (n * n)) - (n * n) << endl;
    }
    else
    {
        n = x / 2;
        m = n + 1;
        cout << (n + (n * n)) - (m * m) << endl;
    }

    return 0;
}

//=================== others ========


// #include<iostream>
// main(){long long n;std::cin>>n;std::cout<<n/2-n%2*n;}


//======== this gets tle ======

// #include <iostream>
// using namespace std;

// int main()
// {

//     long int n, sum = 0;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 == 0)sum += i;
//         else sum += -i;
//     }

//     cout << sum << endl;

//     return 0;
// }



