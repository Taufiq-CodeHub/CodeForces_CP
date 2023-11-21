//https://codeforces.com/problemset/problem/405/A

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    // taking vector input of n size
    int n;cin >> n;
    
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        long long element;cin >> element;
        v.push_back(element);
    }
    
    sort(v.begin(), v.end());

    for(auto &value: v)cout<< value <<' ';cout<<endl;

    return 0;
}