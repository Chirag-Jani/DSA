#include <iostream>
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

    // solving
    int maxweeks = 0;
    int j = 0;
    while (arr[j] != 0 || j < n)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                arr[i]--;
                maxweeks++;
            }
        }
        j++;
    }

    cout << maxweeks - 1;

    return 0;
}