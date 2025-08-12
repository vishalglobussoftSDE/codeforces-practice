// rounde 1042 (div 3);
// not able to solve even after 42 mins and dont understand why same element a[i] - b[i] is same at starting position leads to possible answer watch case 4
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int max_A = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                max_A += a[i] - b[i];
            }
        }
        cout << max_A + 1 << endl;
    }

    return 0;
}