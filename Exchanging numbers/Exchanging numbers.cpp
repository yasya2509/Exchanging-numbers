#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    if (a < 10)
    {
        cout << a << endl;
    }
    if (a > 9 && a < 100)
    {
        cout << (a % 10) * 10 + (a / 10) % 10 << endl;
    }
    if (a > 99 && a < 1000)
    {
        cout << a / 100 + (a % 10) * 100 + (10 * (a / 10) - 100 * (a / 100)) << endl;
    }
    if (a > 999 && a < 10000)
    {
        cout << (a / 1000) * 100 + (a / 100) * 100 + (a % 10) * 10 + (a / 10) % 10 << endl;
    }
    return 0;
}
