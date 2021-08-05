#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long sum = 0;
    cin >> n;
    long long a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    cout << sum;
    return 0;
}