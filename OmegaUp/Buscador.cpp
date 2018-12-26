//https://omegaup.com/arena/problem/Buscador

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/

int LCS_DP(string cadena1, string cadena2)
{
    vector<vector<int>> Matrix(cadena1.size() + 1, vector<int>(cadena2.size() + 1));

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
    return Matrix[cadena1.size()][cadena2.size()];
}

void function()
{
    string cadena, palabra;
    int P, i, M = 0;
    vector<string> dic;
    cin >> cadena >> P;
    dic.push_back(cadena);

    for (i = 0; i < P; i++)
    {
        cin >> cadena;
        dic.push_back(cadena);
    }

    for (i = 1; i < dic.size(); i++)
    {
        P = LCS_DP(dic[i], dic[0]);
        if (P > M)
            M = P;
    }
    cout << M;
}

main(int argc, char const *argv[])
{
    function();
    return 0;
}
