//https://codeforces.com/problemset/problem/155/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;cin >> n;

    long long a, mx = 0, mn = 10001, amz = 0;

    while (cin >> a)
    {
        if (mx < a || mn > a) amz++;
        
        mx = max(mx, a);
        mn = min(mn, a);
    }

    cout << amz - 1 << "\n";

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int n,x,mx=-1,mn=1e9,ans;
// int main(){
// 	cin>>n;
// 	while(n--){
// 		cin>>x;
// 		if(x>mx)mx=x,ans++;
// 		if(x<mn)mn=x,ans++;
// 	}
// 	cout<<ans-2;
// }
