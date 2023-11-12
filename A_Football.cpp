//https://codeforces.com/problemset/problem/96/A

#include<bits/stdc++.h>
using namespace std;

int main(){

    char player; 
    int cnt_0 = 0, cnt_1 = 0;
    
    while (cin>>player)
    {
        if(player == '0'){
            cnt_1=0;
            cnt_0++;
            if(cnt_0==7){cout<<"YES\n";return 0;}
        }
        else
        {
            cnt_0=0;
            cnt_1++;
            if(cnt_1==7){cout<<"YES\n";return 0;}
        }
    }
    
    // if (cnt_0<7)
    // {
        cout<<"NO\n";
    // }
    

    // cout<<cnt_0<<" "<< cnt_1<<"\n";

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// main() {
// 	char s[105];cin>>s;
// 	cout<<((strstr(s,"1111111")||strstr(s,"0000000"))?"YES\n":"NO\n");
// }


// #import<bits/stdc++.h>
// std::string s;main(){
//     std::cin>>s;puts((s.find("0000000")+1||s.find("1111111")+1)?"YES":"NO");
    
// }


// #import<ios>
// char a[101],i,s;main(){for(gets(a);s^6?a[++i]||puts("NO"):puts("YES");a[i]^a[i-1]?s=0:++s);}