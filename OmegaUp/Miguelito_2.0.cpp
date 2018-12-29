//https://omegaup.com/arena/problem/Miguelito-20#
#include <iostream>
using namespace std;

int exp_modular(int &a, int &n, int &m)
{
    int x, p = a;
    while (n--)
    {
        x = p % m;
        p = x * a;
    }
    return x;
}

void function()
{
    int a, n, m;
    cin >> a >> n >> m;
    cout << exp_modular(a, n, m);
}

main(int argc, char const *argv[])
{
    function();
    return 0;
}
