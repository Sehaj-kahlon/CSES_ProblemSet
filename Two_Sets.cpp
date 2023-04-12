#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n1 = 1e9 + 7;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll sum = ((n) * (n + 1) / 2);
    set<ll> s1, s2;
    if ((sum & 1) == 0)
    {
        cout << "YES" << endl;
        ll ans_sum = sum / 2;
        for (ll i = n; i >= 1; i--)
        {
            if (i <= ans_sum)
            {
                s1.insert(i);
                ans_sum -= i;
            }
            else
            {
                s2.insert(i);
            }
        }
        cout << s1.size() << endl;
        for (auto it1 : s1)
        {
            cout << it1 << " ";
        }
        cout << endl;
        cout << s2.size() << endl;
        for (auto it2 : s2)
        {
            cout << it2 << " ";
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}