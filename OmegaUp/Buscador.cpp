//https://omegaup.com/arena/problem/Buscador
/*
Solución:
Si hay dos o más palabras con el mismo factor común que la palabra ingresada, 
la palabra con la menor cantidad de letras entre las empatadas es la ganadora.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/
int LCS_DP(string &cadena1, string &cadena2)
{
    vector<vector<int>> Matrix(cadena1.size() + 1, vector<int>(cadena2.size() + 1));
    for (int i = 0; i <= cadena1.size(); i++)
    {
        for (int j = 0; j <= cadena2.size(); j++)
        {
            if (i == 0 || j == 0)
            {
                Matrix[i][j] = 0;
            }
            else if (cadena1[i - 1] == cadena2[j - 1])
            {
                Matrix[i][j] = Matrix[i - 1][j - 1] + 1;
            }
            else
            {
                Matrix[i][j] = max(Matrix[i - 1][j], Matrix[i][j - 1]);
            }
        }
    }
    return Matrix[cadena1.size()][cadena2.size()];
}

void function()
{
    string cadena1, cadena2, respuesta = "";
    int N, M = 0, P;
    cin >> cadena1 >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> cadena2;
        P = LCS_DP(cadena1, cadena2);
        if (P > M)
        {
            M = P;
            respuesta = cadena2;
        }
        else if (P == M && cadena2.size() < respuesta.size())
        {
            respuesta = cadena2;
        }
    }
    cout << respuesta;
}

main(int argc, char const *argv[])
{
    function();
    return 0;
}
