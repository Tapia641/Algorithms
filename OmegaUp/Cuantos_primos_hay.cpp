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

void function(int &N)
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

    if (N <= 1)
    {
        cout << "No existen numeros primos en la cantidad ingresada.";
    }
    else
    {
        function(N);
    }
    return 0;
}
