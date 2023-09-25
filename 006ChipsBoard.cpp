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

        int tmp_a , tmp_b;
        for (int i = 0; i < n; i++)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] > a[i + 1])
                {
                    tmp_a = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = tmp_a;
                }
                if (b[i] > b[i + 1])
                {
                    tmp_b = b[i];
                    b[i] = b[i + 1];
                    b[i + 1] = tmp_b;
                }
            }
        }

        // cout << a[0] << endl;
        // cout << a_mn << " " << a_mn_indx << endl
        //      << b_mn << " " << b_mn_indx << endl;
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}