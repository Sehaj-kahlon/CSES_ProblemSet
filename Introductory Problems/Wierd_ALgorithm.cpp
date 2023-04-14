#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n1 = 1e9 + 7;
#define ll long long

int main()
{
    long long  n;
    cin >> n;
    cout<< n <<" ";
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            cout << n << " ";
        }
        else
        {
            n = n * 3 + 1;
            cout << n << " ";
        }
    }
    return 0;
}