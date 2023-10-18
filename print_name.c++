// #include <bits/stdc++.h>
#include <iostream>
// #include <math.h>
using namespace std;
void func(int i, int n)
{
    if (i > n)
        return;
    cout << "naveen raghav" << endl;
    func(i + 1, n);
}
int main()
{
    int n = 5;
    // cin >> n;
    func(1, n);
    return 0;
}
