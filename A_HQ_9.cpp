//https://codeforces.com/problemset/problem/133/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

    char ch;

    while (cin>>ch)
    { if (ch=='H' || ch=='Q' || ch=='9')
            { cout<<"YES\n"; return 0; }   }
    
    cout<<"NO\n";

    return 0;
}