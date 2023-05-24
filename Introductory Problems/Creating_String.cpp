#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n1 = 1e9 + 7;
#define ll long long
vector<string> v;
void permute(string &s, int l, int r)
{
    // base condition
    if (l == r)
    {
        v.push_back(s);
        // cout << s << endl;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(s[l], s[i]);
            permute(s, l + 1, r);
            // backtrack
            swap(s[l], s[i]);
        }
    }
}
int main()
{
    string s;
    cin >> s;

    permute(s, 0, s.length() - 1);

    int n = v.size();
    set<string> se;
    for (int i = 0; i < n; i++)
    {
        se.insert(v[i]);
    }
    set<string>::iterator it;
    cout << se.size() << endl;
    for (it = se.begin(); it != se.end(); ++it)
    {
        cout << *it << endl;
    }

    return 0;
}