/*
https://omegaup.com/arena/problem/Cuantos-primos-hay
Un número primo es aquel que solo es divisible entre el 1 y el mismo.
*/

#include <iostream>
using namespace std;

bool isPrime(int &X)
{
    for (int i = 2; i < X; i++)
    {
        if (X % i == 0)
            return false;
    }
    return true;
}

function(int &N)
{
    int C = 0;
    for (int i = 2; i < N; i++)
    {
        if (isPrime(i))
            C++;
    }
    cout << C;
}

main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    function(N);
    return 0;
}
