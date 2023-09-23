//https://codeforces.com/problemset/problem/158/A

#include<iostream>
using namespace std;

int main(){

    int n,k,kth_val,cnt=0;
    cin>>n>>k;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    kth_val=a[k-1];
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0 && a[i]>=kth_val ){
            cnt++;
        }
    }
    
    cout<<cnt<<endl;   

    return 0;
}