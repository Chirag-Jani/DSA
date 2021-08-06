#include <bits/stdc++.h>
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

    int max_height = INT32_MIN;
    int max_element = INT32_MIN;
    int candle_count = 0;
    int previous_max = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max_height && arr[i] >= max_element)
        {
            max_element = arr[i];
            if (max_element == previous_max)
            {
                candle_count++;
            }
            else
            {
                candle_count = 1;
            }

            previous_max = max_element;
        }
    }

    cout << candle_count;

    return 0;
}