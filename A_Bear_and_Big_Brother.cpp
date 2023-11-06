//https://codeforces.com/problemset/problem/617/A

#include <iostream>
using namespace std;

int main()
{

    int a, b, years = 0;
    cin >> a >> b;

    while (1)
    {
        if (a > b)
        {
            cout << years << "\n";
            break;
        }
        else
        {
            a *= 3, b *= 2;
            years++;
        }
    }

    return 0;
}