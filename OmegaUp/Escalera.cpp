//https://omegaup.com/arena/problem/escalera
#include <iostream>
using namespace std;
#define FASTINPUT \
    cin.tie(0);   \
    ios_base::sync_with_stdio(0);
/*
Con N = 4 Y K = 3
1,1,1,1
1,1,2
1,2,1
2,1,1
2,2,
1,3
3,1
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