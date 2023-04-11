#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n1 = 1e9 + 7;
#define ll long long

int main()
{
    long long n;
    cin >> n;
    vector<int> v;
    if (n == 1)
    {
        cout << 1;
    }
    else if (n >= 2 && n <= 3)
    {
        cout << "NO SOLUTION" << endl;
    }
    else if (n == 4)
    {
        cout << 2 << " " << 4 << " " << 1 << " " << 3;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                cout << i << " ";
            }
            else
            {
                v.push_back(i);
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }

    return 0;
}