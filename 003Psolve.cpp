//https://codeforces.com/problemset/problem/231/A

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    int a[n],b[n],c[n],cnt=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    

    for (int i = 0; i < n; i++)
    {
        if(a[i]==1 && b[i]==1 ){
            cnt++;
        }
        else if(a[i]==1 && c[i]==1){
            cnt++;
        }
        else if(b[i]==1 && c[i]==1){
            cnt++;
        }
    }
    
    cout<<cnt<<endl;
   

    
    return 0;
}