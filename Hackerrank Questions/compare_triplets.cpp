#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3];
    int b[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    int pointA = 0, pointB = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            pointA++;
        }
        if (a[i] < b[i])
        {
            pointB++;
        }
    }

    int pointArr[2] = {pointA, pointB};
    for (int i = 0; i < 2; i++)
    {
        cout << pointArr[i] << " ";
    }

    return 0;
}