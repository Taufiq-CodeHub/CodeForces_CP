#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        int a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int a_mn = a[0], b_mn = b[0], a_mn_indx = 0, b_mn_indx = 0;

        for (int i = 0; i < n; i++)
        {
            if (a_mn > a[i])
            {
                a_mn = a[i];
                a_mn_indx = i;
            }
            if (b_mn > b[i])
            {
                b_mn = b[i];
                b_mn_indx = i;
            }
        }

        int tmp_a, tmp_b;
        for (int i = 0; i < n; i++)
        {
            for (int i = 1; i <= n; i++)
            {
                if (a[i-1] > a[i ])
                {
                    tmp_a = a[i-1];
                    a[i-1] = a[i ];
                    a[i ] = tmp_a;
                }
                if (b[i-1] > b[i ])
                {
                    tmp_b = b[i-1];
                    b[i-1] = b[i ];
                    b[i ] = tmp_b;
                }
            }
        }

        


        // int mn1 = min(a_mn, b_mn);

        // // cout<<mn1<<" "<<a_mn<<" "<<b_mn<<endl;

        // if (mn1 == a_mn)
        // {

        //     int sum = 0;
        //     for (int i = 0; i < n; i++)
        //     {
        //         sum = sum + a_mn + b[i];
        //     }
        //     cout << sum << endl;
        // }
        // else if(mn1 == b_mn)
        // {

        //     int sum = 0;
        //     for (int i = 0; i < n; i++)
        //     {
        //         sum = sum + b_mn + a[i];
        //     }
        //     cout << sum << endl;
        // }

        /* output
            10
            9
            13
            24
        */

        // cout << a[0] << endl;
        // cout << a_mn << " " << a_mn_indx << endl
        //      << b_mn << " " << b_mn_indx << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<b[i]<<" ";
        // }
        // cout<<endl;
    }

    return 0;
}