#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    int h=0,e=0,l1=0,l2=0,o=0;

    // for (int i = 0; i < s.size(); i++) {
    //     s=ori_s;
    //     if (s[i]!='h'|| s[i]!='e'|| s[i]!='l'|| s[i]!='l'|| s[i]!='o')
    //     {
    //          s.erase(remove(s.begin(), s.end(), s[i]), s.end());
    //     }
        
    // }
    
    s.erase(remove(s.begin(), s.end(), 'l'), s.end());

    cout<<s<<endl;
    

    return 0;
}