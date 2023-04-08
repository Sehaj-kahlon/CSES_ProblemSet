#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int n1=1e9+7;
#define ll long long
 
int main()
{
   long long n;
   cin>>n;
   long long arr[n];
   long long moves = 0;
   for (long long i =0 ; i < n; i++)
   {
    cin>>arr[i];
   }
   for (long long i = 1; i < n; i++)
   {
    if(arr[i] < arr[i-1]){
        moves += (arr[i-1] - arr[i]);
        arr[i] +=( arr[i-1] - arr[i]);
    }
    // cout<<arr[i]<<" "<<endl;
   }
   cout<<moves<<endl;   
   return 0;
}