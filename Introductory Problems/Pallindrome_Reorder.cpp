#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n1 = 1e9 + 7;
#define ll long long
bool cmp(pair<char, int> &a,
         pair<char, int> &b)
{
    return a.second > b.second;
}
vector<pair<char, int>> sortf(map<char, int> &M)
{

    vector<pair<char, int>> A;
    for (auto &it : M)
    {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
    return A;
}
int main()
{
    string s;
    cin >> s;
    int a = s.size();
    map<char, int> mp;
    string ans = "";
    for (int i = 0; i < a; i++)
    {
        mp[s[i]]++;
    };
    vector<pair<char, int>> v = sortf(mp);
    // for (auto &it : v)
    // {

    //     cout << it.first << ' '
    //          << it.second << endl;
    // }
    for (auto &it : v)
    {
        for (int i = 0; i < it.second / 2; i++)
        {
            ans += it.first;
            cout << it.first;
        }
        if (it.second == 1)
        {
            ans += it.first;
            cout << it.first;
        }
    }
    for (int i = ans.size() - 2; i >= 0; i--)
    {
        ans += ans[i];
        cout << ans[i];
    }
    // cout << ans << endl;
    return 0;
}