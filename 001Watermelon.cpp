// https://codeforces.com/problemset/problem/4/A

#include <iostream>
using namespace std;

int main()
{

    int a;
    cin >> a;
    if (a % 2 != 0)
        cout << "NO" << endl;
    else if(a==2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}