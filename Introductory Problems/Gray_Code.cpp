#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n1 = 1e9 + 7;
#define ll long long
int powf(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        n--;
        return x * pow(x, n);
    }
}
int main()
{
    int n;
    cin >> n;
    int f = powf(2, n);
    // for(int i = 0; i < f; i++){

    // }

    return 0;
}