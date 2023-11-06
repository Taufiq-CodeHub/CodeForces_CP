// https://codeforces.com/problemset/problem/443/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    set<char> s;
    char element;

    while (element != '}')
    {
        cin >> element;
        s.insert(element);
    }

    // for(auto &value: s)cout<< value <<' ';cout<<endl;

    if (s.size() == 2)

        cout << s.size() - 2 << "\n";

    else if (s.size() == 3)

        cout << s.size() - 2 << "\n";

    else

        cout << s.size() - 3 << "\n";

    return 0;
}

/*

In C programming, isalpha() function checks whether a character is an alphabet (a to z and A-Z) or not.

#include<bits/stdc++.h>
using namespace std;
char c;
set<char>S;
main()
{
    while(cin>>c)
    if(isalpha(c))
    S.insert(c);
    cout<<S.size();
}

#include<bits/stdc++.h>
using namespace std;
set<char>s;
char a;
int main()
{
    while(cin>>a)
    {
        if(a>='a'&& a<='z')s.insert(a);
    }
    cout<<s.size();
}




*/
