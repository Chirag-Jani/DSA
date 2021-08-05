#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double a[n][n];
    int left_to_right = 0, right_to_left = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // solving
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                left_to_right += a[i][j];
            }
            if (i + j == n - 1)
            {
                right_to_left += a[i][j];
            }
        }
    }

    ans = abs(left_to_right - right_to_left);
    cout << ans;
    return 0;
}