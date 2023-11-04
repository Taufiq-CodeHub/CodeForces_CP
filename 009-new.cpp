//https://codeforces.com/problemset/problem/263/A

#include<iostream>
using namespace std;

int main(){

    
    int arr[5][5], i, j, row, col ;
    for( j=0 ;j <5 ;j++){
        for ( i = 0; i < 5; i++)
        {
            cin>>arr[j][i];
            if(arr[j][i]==1){
                row=j;
                col=i;
            }
        }
    }
    
    cout<<abs(2-row)+abs(2-col);

    return 0;
}