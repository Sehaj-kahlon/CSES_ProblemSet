#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n1 = 1e9 + 7;
#define ll long long
void generateGrayarr(int n)
{
    if (n <= 0)
    {
        return;
    }
    vector<string> arr;
    // intitally making the array of 0 1 - starting from 0 1
    arr.push_back("0");
    arr.push_back("1");
    int i, j;
    for (int i = 2; i < (1 << n); i = i << 1)
    {
        // entering the previosly generated code in the array again like l2
        for (j = i - 1; j >= 0; j--)
        {
            arr.push_back(arr[j]);
        }
        // append 0 to the first half
        for (j = 0; j < i; j++)
        {
            arr[j] = "0" + arr[j];
        }
        // appendn 1 to the second half
        for (j = i; j < 2 * i; j++)
        {
            arr[j] = "1" + arr[j];
        }
    }
    for (i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int n;
    cin >> n;

    generateGrayarr(n);

    return 0;
}