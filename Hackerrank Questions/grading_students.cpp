#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int next_multiple = a[i] % 5;
        int diff = 5 - next_multiple;
        if (diff < 3 && a[i] + diff >= 40)
        {
            a[i] += diff;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " " << endl;
    }

    return 0;
}