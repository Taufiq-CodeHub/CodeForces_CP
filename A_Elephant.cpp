//https://codeforces.com/problemset/problem/617/A

#include<iostream>
using namespace std;

int main(){

    int x; cin>>x;

    if (x%5==0)
    {
        cout << x/5  << "\n";

    }
    else{
        cout << (x/5)+1  << "\n";
        
    }
    

    return 0;
}