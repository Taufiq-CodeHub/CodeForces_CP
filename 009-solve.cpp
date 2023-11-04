//https://codeforces.com/problemset/problem/263/A

#include<iostream>
main() {
  for(int i=0,a;std::cin>>a;i++)
    if(a) std::cout<<abs(2-i/5)+abs(2-i%5);
    // i/5 == row, i%5 == col 
    //     Input:
        // 0 0 0 0 0
        // 0 0 0 0 1
        // 0 0 0 0 0
        // 0 0 0 0 0
        // 0 0 0 0 0

        // Output:
        // 3

}