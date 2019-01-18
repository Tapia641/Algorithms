//https://omegaup.com/arena/problem/escalera
#include <iostream>
using namespace std;
#define FASTINPUT \
    cin.tie(0);   \
    ios_base::sync_with_stdio(0);
/*
Tenemos las combinaciones de la siguiente manera:
1,1 - 1
2,2 - 2
3,3 - 4
4,4 - 8
5,5 - 16
*/
int Escaleras(int N, int K)
{
    if (K == 1 || K == N)
        return 1;
    else
    {
        int C = 0;
        for (int i = 1; i < N + 1; i++)
        {
            C += Escaleras(N, K);
        }
        return C;
    }
}

void function()
{
    FASTINPUT
    int N, K;
    cin >> N >> K;
    cout << "\n Respuesta: " << Escaleras(N, K);
}

main(int argc, char const *argv[])
{
    function();
    return 0;
}