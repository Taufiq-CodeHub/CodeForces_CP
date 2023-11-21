//https://codeforces.com/problemset/problem/469/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, n2, n3;
    cin >> n >> n2;
    set<int> s;
    for (int i = 0; i < n2; i++)
    {
        long long element_p;
        cin >> element_p;
        s.insert(element_p);
    }

    cin >> n3;
    for (int i = 0; i < n3; i++)
    {
        long long element_q;
        cin >> element_q;
        s.insert(element_q);
    }

    if (n2 == 0 && n3 == 0)
    {

        cout << "Oh, my keyboard!\n";
    }
    else if (s.size() == n || n2 == 0 || n3 == 0)
    {
        cout << "I become the guy.\n";
    }
    else
    {
        cout << "Oh, my keyboard!\n";
    }

    // cout << s.size() <<" "<<s.max_size() << "\n";
    
    // for(auto &value: s)cout<< value <<' ';cout<<endl;
    
    

    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;
long k, n, p, a, w[105];
main()
{
    for (cin >> n >> p; p--; n -= !w[k]++)
        cin >> k;
    for (cin >> a; a--; n -= !w[k]++)
        cin >> k;
    cout << (n ? "Oh, my keyboard!" : "I become the guy.");
}

*/