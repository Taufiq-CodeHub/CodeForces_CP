// https://codeforces.com/problemset/problem/271/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int year; cin>>year;

    while (1)
    {   
        int tmp_yr = ++year;

        int d1, d2, d3, d4;
        //for (int i = 0; i < 4; i++) {
            d4=tmp_yr%10;
            tmp_yr /= 10;
            d3=tmp_yr%10;
            tmp_yr /= 10;
            d2=tmp_yr%10;
            tmp_yr /= 10;
            d1=tmp_yr%10;
            tmp_yr /= 10;
        //}
        if (d1==d2 || d1==d3 || d1==d4 || d2==d3 || d2==d4 || d3==d4 )
        {
            // year++;   
        }
        else{
            cout<<year<<endl;
            return 0;
        }
        
        
    }
    
    

    return 0;
}


/*
//=================

#include<iostream>
using namespace std;
int main(){
int n,a,b,c,d;cin>>n;
do n++,a=n/1000,b=(n/100)%10,c=(n/10)%10,d=n%10;
while(a==b||a==c||a==d||b==c||b==d||c==d);
cout<<n;}

//=================
*/

