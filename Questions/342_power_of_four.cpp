#include <iostream>
using namespace std;
bool poweroffour(int n)
{
    int num = n / 4;

    if (num <= 0)
    {
        return false;
    }
    if (num == 0)
    {
        return true;
    }
    poweroffour(num);
}
int main()
{
    int n;
    cin >> n;
    bool res = poweroffour(n);
    cout << res;
}