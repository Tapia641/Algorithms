//https://omegaup.com/arena/problem/Buscador

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/

int LCS_DP(string cadena1, string cadena2)
{
    vector<vector<int>> Matrix(cadena1.size(), vector<int>(cadena2.size()));

    for (int i = 0; i < cadena1.size(); i++)
    {
        for (int j = 0; j < cadena2.size(); j++)
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

    return Matrix[cadena1.size() - 1][cadena2.size() - 1];
}

void function()
{
    string cadena, palabra, res = "";
    int AUX, M = 0, N, i;
    cin >> cadena >> N;

    for (i = 0; i < N; i++)
    {
        cin >> palabra;
        AUX = LCS_DP(cadena, palabra);
        if (AUX >= M)
        {
            M = AUX;
            res = palabra;
        }
    }
    cout<<res;
}

main(int argc, char const *argv[])
{
    function();
    return 0;
}
