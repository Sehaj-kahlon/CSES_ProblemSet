#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int n1=1e9+7;
#define ll long long
int countWays(int k) {
    if (k <= 0)
        return 0;
    if (k == 1)
        return 0;
    if (k == 2)
        return 6;
    int totalWays = (k * k) * (k * k - 1) / 2 - 4 * (k - 1) * (k - 2);
    return totalWays;
}
int main()
{
   int n;
   cin>>n;
   for(int i=1; i<= n; i++){
   cout<<countWays(i)<<endl;;
   }
   return 0;
}