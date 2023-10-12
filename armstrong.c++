#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int r = 0, n;
    cin >> n;
    int check = n;
    int sum = 0;
    while (n > 0)
    {
        int l = n % 10;
        sum = sum + (l * l * l);
        n = n / 10;
        r = (r * 10) + l;
    }
    // cout << r;
    if (check == sum)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}