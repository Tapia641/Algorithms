//https://omegaup.com/arena/problem/aldp

#include <iostream>
#include <vector>

using namespace std;

int position(vector<int> &V, int &X)
{
    int left = 0, right = V.size() - 1, middle = 0;
    while (left <= right)
    {
        middle = (int)((right + left) / 2);
        if (V[middle] == X)
            return middle;
        if (V[middle] > X)
            right = middle - 1;
        else
            left = middle + 1;
    }
    return -1;
}

void function()
{
    vector<int> Chapas, Llaves;
    int X, W, M, N;

    //Chapas
    scanf("%d", &M);
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &X);
        Chapas.push_back(X);
    }

    //Llaves
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &X);
        Llaves.push_back(X);
    }

    for (int i = 0; i < N; i++)
    {
        W = (position(Chapas, Llaves[i]));
        if (W == -1)
        {
            cout << 0 << " ";
        }
        else
        {
            //Para indices ordinales
            cout << W + 1 << " ";
        }
    }
}

main(int argc, char const *argv[])
{
    //Con N <= M
    function();
    return 0;
}
