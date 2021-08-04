#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ansarr[n];
    for (int i = 0; i < n; i++)
    {
        ansarr[i] = arr[n - 1 - i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << ansarr[i] << " ";
    }

    return 0;
}
