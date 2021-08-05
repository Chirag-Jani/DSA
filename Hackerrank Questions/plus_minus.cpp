#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double a[n];

    double positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            positive++;
        }
        else if (a[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    cout << positive / n << endl;
    cout << negative / n << endl;
    cout << zero / n << endl;

    return 0;
}