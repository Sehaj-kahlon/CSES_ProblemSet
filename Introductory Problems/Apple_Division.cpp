#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n1 = 1e9 + 7;
#define ll long long
//
int main()
{
   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   int sum1 = 0, sum2 = 0;
   sort(arr, arr + n);
   for (int i = 0; i < n / 2; i++)
   {
      // odd i
      if (i & 1)
      {
         sum2 += arr[i] + arr[n - 1 - i];
      }
      else
      {
         sum1 += arr[i] + arr[n - 1 - i];
      }
   }
   if (n & 1)
   {
      if (sum1 <= sum2)
      {
         sum1 += arr[n / 2];
      }
      else
      {
         sum2 += arr[n / 2];
      }
   }

   cout << abs(sum1 - sum2) << endl;

   return 0;
}