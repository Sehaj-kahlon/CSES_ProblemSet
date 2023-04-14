#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n1 = 1e9 + 7;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll ans = 0, temp =5;
    while(temp<=n)
    {
        ans += n /temp;
        temp *=5;
    }
    cout << ans << endl;
    return 0;
}
// left shift if the number becomes odd then stop