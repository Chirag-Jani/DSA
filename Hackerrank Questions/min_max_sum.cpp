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

    long int min_sum = 0, max_sum = 0;

    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min])
                min = j;
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for (int i = 0; i < n - 1; i++)
    {
        min_sum += arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        max_sum += arr[i];
    }

    cout << min_sum << " " << max_sum;
    return 0;
}