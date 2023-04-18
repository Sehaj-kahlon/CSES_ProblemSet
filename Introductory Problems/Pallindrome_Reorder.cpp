#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n1 = 1e9 + 7;
#define ll long long
int main()
{
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    int count = 0;
    char odd;
    for (auto &it : mp)
    {
        if (it.second % 2 != 0)
        {
            count++;
            odd = it.first;
        }
    }
    if (count > 1 && s.size() > 1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        string s1 = "", s2 = "";
        for (auto &x : mp)
        {
            string s(x.second / 2, x.first);
            s1 += s;
            s2 = s + s2;
        }
        if (count == 1)
        {
            cout << (s1 + odd + s2);
        }
        else
        {
            cout << (s1 + s2);
        }
    }

    return 0;
}