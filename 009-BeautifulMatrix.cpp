//https://codeforces.com/problemset/problem/263/A

//short solution
// #include<iostream>
// main() {
//   for(int i=0,a;std::cin>>a;i++)
//     if(a) std::cout<<abs(2-i/5)+abs(2-i%5);
// }

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
                // break;
            }
        }
    }

    if((row==2 && col==2))
        cout<<0;
    else if((row==1 && col==2))
        cout<<1;
    else if((row==3 && col==2))
        cout<<1;
    else if((row==2 && col==1))
        cout<<1;
    else if((row==2 && col==3))
        cout<<1;
    else if((row==0 && col==0))
        cout<<4;
    else if((row==4 && col==4))
        cout<<4;
    else if((row==0 && col==4))
        cout<<4;
    else if((row==4 && col==0))
        cout<<4;
    else if((row==0 && col==2))
        cout<<2;
    else if((row==2 && col==0))
        cout<<2;
    else if((row==4 && col==2))
        cout<<2;
    else if((row==2 && col==4))
        cout<<2;
    else if((row==1 && col==1))
        cout<<2;
    else if((row==3 && col==3))
        cout<<2;
    else if((row==1 && col==3))
        cout<<2;
    else if((row==3 && col==1))
        cout<<2;
    else if((row==0 && col==1))
        cout<<3;
    else if((row==0 && col==3))
        cout<<3;
    else if((row==1 && col==0))
        cout<<3;
    else if((row==3 && col==0))
        cout<<3;
    else if((row==4 && col==1))
        cout<<3;
    else if((row==4 && col==3))
        cout<<3;
    else if((row==1 && col==4))
        cout<<3;
    else if((row==3 && col==4))
        cout<<3;
    

    // cout<<row<<" "<<col;
    // for(int j=0 ;j <5 ;j++){
    //     for (int i = 0; i < 5; i++)
    //     {
    //         cout<<arr[j][i]<<"  ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}