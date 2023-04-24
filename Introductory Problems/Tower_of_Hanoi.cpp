#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n1 = 1e9 + 7;
#define ll long long
void tOh(int n, int from_rod, int aux_rod, int to_rod)
{
    // vector<pair<int, int>> ans;
    if (n == 0)
    {
        // move disk from soource to destination
        return;
    }
    tOh(n - 1, from_rod, to_rod, aux_rod);
    cout << from_rod << " " << to_rod << endl;
    // ans.push_back({from_rod, to_rod});
    tOh(n - 1, aux_rod, from_rod, to_rod);
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> ans;
    cout << pow(2, n) - 1 << endl;
    tOh(n, 1, 2, 3);
    // cout<<ans.size()<<endl;
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout<<ans[i].first<<" "<<ans[i].second<<endl;
    // }

    return 0;
}