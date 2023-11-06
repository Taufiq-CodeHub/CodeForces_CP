//https://codeforces.com/problemset/problem/443/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n, tmp = 0, cnt = 0;

    cin >> n;

    int dollar[] = {100, 20, 10, 5, 1};

    for (int i = 0; i < 5; i++)
    {
        if (n >= dollar[i])
        {
            tmp = n / dollar[i];
            cnt += tmp;
            n = n - (tmp * dollar[i]);
        }
    }

    cout << cnt << "\n";

    // if(n>=100){
    //     tmp=n/100;
    //     cnt+=tmp;
    //     n=n-(tmp*100);
    // }
    // if(n>=20){
    //     tmp=n/20;
    //     cnt+=tmp;
    //     n=n-(tmp*20);
    // }
    // if(n>=10){
    //     tmp=n/10;
    //     cnt+=tmp;
    //     n=n-(tmp*10);
    // }
    // if(n>=5){
    //     tmp=n/5;
    //     cnt+=tmp;
    //     n=n-(tmp*5);
    // }
    // if(n>=1){
    //     tmp=n/1;
    //     cnt+=tmp;
    //     n=n-(tmp*1);
    // }


    return 0;
}



/*

#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	cout<<n/100+n%100/20+n%20/10+n%10/5+n%5;
	return 0;
}



*/