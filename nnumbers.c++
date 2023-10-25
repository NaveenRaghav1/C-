#include <iostream>
// #include <math.h>
using namespace std;
int func(int n)
{
    if (n < 0)
    {
        cout << n - 1 << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    func(n);
    return 0;
}