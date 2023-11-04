//https://codeforces.com/problemset/problem/734/A

#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n, a = 0, d = 0;
    cin >> n;

    string st;
    cin >> st;

    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == 'A')a++;
        else d++;
    }

    if (a > d)cout << "Anton"<< "\n";
    else if (a == d)cout << "Friendship"<< "\n";
    else cout << "Danik"<< "\n";

    return 0;
}