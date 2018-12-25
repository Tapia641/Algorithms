//https://omegaup.com/arena/problem/aldp

#include <iostream>
#include <queue>

using namespace std;

void function(int &M, int &N)
{
    queue<int> Chapas, Llaves;
    int X;
    
    //Chapas
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &X);
        Chapas.push(X);
    }

    //Llaves
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &X);
        Llaves.push(X);
    }
}

main(int argc, char const *argv[])
{
    //Con N <= M
    int M, N;
    scanf("%d%d", &M, &N);
    function(M, N);

    return 0;
}
