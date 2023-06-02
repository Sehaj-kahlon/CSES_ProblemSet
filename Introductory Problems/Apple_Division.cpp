#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n1 = 1e9 + 7;
#define ll long long

int main()
{
   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   int i = 0, j = n - 1;
   int sum1 = 0, sum2 = 0;
   sort(arr, arr + n);
   while (i < j)
   {
      // odd
      if (i & 1)
      {
         sum2 += (arr[i] + arr[j]);
         i++;
         j--;
      }
      else
      {
         sum1 += (arr[i] + arr[j]);
         i++;
         j--;
      }
      if (i == j)
      {
         if (sum1 < sum2)
         {
            sum1 += arr[i];
         }
         else
         {
            sum2 += arr[i];
         }
      }
   }
   cout << abs(sum1 - sum2) << endl;

   return 0;
}