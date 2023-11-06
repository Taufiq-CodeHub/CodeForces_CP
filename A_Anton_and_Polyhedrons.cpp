#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n, face=0; cin >> n;
    string st;
    while (cin>>st)
    {
        if (st=="Cube") face+= 6;
        else if (st=="Icosahedron") face+= 20;
        else if(st=="Tetrahedron") face+= 4;
        else if(st=="Dodecahedron") face+= 12;
        else if(st=="Octahedron") face+= 8;
    }
    
    cout << face  << "\n";


    return 0;
}



/*

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    string s;
    for(cin>>n;n--;sum+=(s[0]=='T'?4:s[0]=='C'?6:s[0]=='O'?8:s[0]=='D'?12:20))
    {
        cin>>s;
    }
    cout<<sum;
}
*/