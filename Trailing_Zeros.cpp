#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n1 = 1e9 + 7;
#define ll long long
ll fact(ll n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    ll n;
    cin >> n;
    ll y = fact(n);
    string x = to_string(y);
    // cout << x << endl;
    ll count = 0;
    for (ll i = x.length() - 1; i >= 0; i--)
    {
        if (x[i] == '0')
        {
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
    return 0;
}
// left shift if the number becomes odd then stop