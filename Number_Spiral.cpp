#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n1 = 1e9 + 7;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> y >> x;
        if (x >= y)
        {
            if (x % 2 != 0)
            {
                cout << x * x - y + 1 << endl;
            }
            else
            {
                cout << (x - 1) * (x - 1) + y << endl;
            }
        }
        else
        {
            if (y % 2 == 0)
            {
                cout << y * y - x + 1 << endl;
            }
            else
            {
                cout << (y - 1) * (y - 1) + x << endl;
            }
        }
    }
    return 0;
}