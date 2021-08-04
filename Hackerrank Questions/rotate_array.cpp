#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rotations;
    cin >> rotations;

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k = 1;
    while (k <= rotations)
    {
        int temp = arr[k - 1];
        // cout << temp << endl;
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
        k++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
