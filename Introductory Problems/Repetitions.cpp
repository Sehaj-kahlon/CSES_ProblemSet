#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n1 = 1e9 + 7;
#define ll long long

int main()
{
    string s;
    cin >> s;
    long long n = s.length();
    long long count = 0;
    long long ans = 0;
    for (int i = 0; i < n -1; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            ans = max(ans, count+1);
            count = 0;
        }
    }
    ans = max(ans, count+1);
    cout<<ans<<endl;

    return 0;
}