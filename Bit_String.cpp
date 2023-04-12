#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll n1 = 1e9 + 7;
ll power(ll x, ll y, ll p)
{
    ll res = 1; // initialize by 1

    x = x % p; // update x if it is more than or equal to p
    // in out case x is 2

    while (y > 0)
    {
        // if y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
//y must be even now
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
int main()
{
    ll n;
    cin >> n;
    cout << power(2, n, n1);

    return 0;
}