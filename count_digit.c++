#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int c = 0, num;
    cin >> num;
    for (c; num > 0; c++)
    {
        num = num / 10;
    }
    cout << c;
}