// https://codeforces.com/contest/1873/problem/C
#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int i, j, row, col, total = 0;
        char arr[10][10];
        for (j = 0; j < 10; j++)
        {
            for (i = 0; i < 10; i++)
            {
                cin >> arr[j][i];
                if (arr[j][i] == 'X')
                {
                    // if((j==4 && i==4) || (j==4 && i==5) || (j==5 && i==4) || (j==5 && i==5)){
                    //     total+=5;
                    // }
                    // else
                    if (j == 0 || i == 0 || j == 9 || i == 9)
                    {
                        total += 1;
                    }
                    else if (j == 1 || i == 1 || j == 8 || i == 8)
                    {
                        total += 2;
                    }
                    else if (j == 2 || i == 2 || j == 7 || i == 7)
                    {
                        total += 3;
                    }
                    else if (j == 3 || i == 3 || j == 6 || i == 6)
                    {
                        total += 4;
                    }
                    else if (j == 4 || i == 4 || j == 5 || i == 5)
                    {
                        total += 5;
                    }
                    // else{
                    //     cout<<0;
                    //     return 0;
                    // }

                    // row=j;
                    // col=i;
                    // cout<<j<<" "<<i<<endl;
                }
            }
        }

        if (!total)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << total << endl;
        }
    }

    return 0;
}

/*
===========others solve================

#include<bits/stdc++.h>
using namespace std;

void solve(){

char c;
int num=0,i,j;

for(i=1;i<=10;i++)

for(j=1;j<=10;j++){
    cin>>c;
    if(c=='X'){num+=min(min(i,j),min(11-i,11-j));}
}
cout<<num<<endl;
}

int main(){
int i;
cin>>i;
while(i--)
{
solve();
}
}

================================2
#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int ans = 0;
        for (int i= 0 ;i<10;i++)
        {
            string s;
            cin>>s;
            for (int j= 0; j<10;j++)
            {
                if (s[j]=='X') ans+=min(min(i+1,j+1), min(10-i, 10-j));
            }
        }
        cout<<ans<<endl;
    }
}








========================3

<?php
$mod = 1000000007;
$intMaxValue = 2147483646; //2147483647

$loop = true;
$t = $loop ? IO::get() : 1;
while($t--) {
    solve();
}
function solve()
{
     $mapping = [
          [1, 1, 1, 1, 1, 1, 1 ,1 ,1, 1],
          [1, 2, 2, 2, 2, 2, 2 ,2 ,2, 1],
          [1, 2, 3, 3, 3, 3, 3 ,3 ,2, 1],
          [1, 2, 3, 4, 4, 4, 4 ,3 ,2, 1],
          [1, 2, 3, 4, 5, 5, 4 ,3 ,2, 1],
          [1, 2, 3, 4, 5, 5, 4 ,3 ,2, 1],
          [1, 2, 3, 4, 4, 4, 4 ,3 ,2, 1],
          [1, 2, 3, 3, 3, 3, 3 ,3 ,2, 1],
          [1, 2, 2, 2, 2, 2, 2 ,2 ,2, 1],
          [1, 1, 1, 1, 1, 1, 1 ,1 ,1, 1],
     ];
     $ans = 0;
    for($i=0; $i<10; $i++) {
         $s = IO::get();
        for($j=0; $j<10; $j++) {
          if($s[$j] == 'X') {
              $ans += $mapping[$i][$j]; 
          }
        }
    }
   
    
    IO::pr($ans);
    
    
}


class IO {
    public static function get()
    {
        return trim(fgets(STDIN));
    }

    public static function getArray()
    {
        return explode(' ', trim(fgets(STDIN)));
    }
    public static function pr($s, $bInter = true)
    {
        echo $s, $bInter ? PHP_EOL : '';
    }
    public static function prArray($s)
    {
        echo implode( ' ', $s), PHP_EOL;
    }
    public static function getMinValue($x, $y) {
        return $x > $y ? $y : $x;
    }
    public static function getMaxValue($x, $y) {
        return $x > $y ? $x : $y;
    }
}

*/


