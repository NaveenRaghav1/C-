#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int r = 0, n;
    cin >> n;
    while (n > 0)
    {
        int l = n % 10;
        n = n / 10;
        r = (r * 10) + l;
    }
    cout << r;
}