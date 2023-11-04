//https://codeforces.com/problemset/problem/112/A


#
// #             H       H    EEEEEEEEE               H       H    EEEEEEEEE               H       H    EEEEEEEEE               H       H        A
// #             H       H    E                       H       H    E                       H       H    E                       H       H       A A
// #             H       H    E                       H       H    E                       H       H    E                       H       H      A   A
// #             H       H    E                       H       H    E                       H       H    E                       H       H     A     A
// #             HHHHHHHHH    EEEEEEE     ----------  HHHHHHHHH    EEEEEEE     ----------  HHHHHHHHH    EEEEEEE     ----------  HHHHHHHHH    A      A
// #             H       H    E                       H       H    E                       H       H    E                       H       H    AAAAAAAAA
// #             H       H    E                       H       H    E                       H       H    E                       H       H   A         A
// #             H       H    E                       H       H    E                       H       H    E                       H       H   A         A
// #             H       H    EEEEEEEEE               H       H    EEEEEEEEE               H       H    EEEEEEEEE               H       H   A         A
 


#include<bits/stdc++.h> 
#include<iostream>
#include<cstring>
using namespace std;

int main(){

    string str1, str2;
    cin>>str1 >> str2 ;

    transform(str1.begin(), str1.end(), str1.begin(), ::toupper); 
    // cout<<str1<<endl; 
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper); 
    // cout<<str2<<endl; 

    // cout<<str1.length();

    int flag=10;

    for (int i = 0; i < str1.length(); i++)
    {
        if(str1[i]==str2[i])
            flag=0;
        else if(str1[i]<str2[i]){
            flag=-1;
            break;
        }
        else if(str1[i]>str2[i]){
            flag=1;
            break;
        }
    }

    cout<<flag;

    // if (flag==0){
    //     cout<<0;
    //     return 0;
    // }
    // else if (flag==-1)
    // {
    //     cout<<-1;
    //     return 0;
    // }
    // else if (flag==1)
    // {
    //     cout<<1;
    //     return 0;
    // }
    
return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// char a[101],b[101];
// main(){cin>>a>>b,cout<<strcmp(strlwr(a),strlwr(b));}



// #include <bits/stdc++.h>
// char s[101],f[101];main(){std::cin>>s>>f;std::cout<<stricmp(s,f);}
