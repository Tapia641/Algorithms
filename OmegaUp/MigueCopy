//https://omegaup.com/arena/problem/Miguelito-20#
#include <iostream>
using namespace std;

void exp_modular_rap(long long &a, long long &n, long long &m)
{
    /*
    long long x = a % m, e = 1;
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            e = (e * x) % m;
        }
        n = n / 2;
        x = (x * x) % m;
    }
    cout << e;

    */

    long long x = 1;
    while (n > 0)
    {
        //Preguntamos si es impar
        if (n & 1)
        {
            x = (x * a) % m;
        }
        //Hacemos corrimientos de bits para la siguiente iteración
        n = n >> 1;
        a = (a * a) % m;
    }
    cout << x;
}

void function()
{
    long long a, n, m;
    cin >> a >> n >> m;
    exp_modular_rap(a, n, m);
}

main(int argc, char const *argv[])
{
    function();
    return 0;
}
