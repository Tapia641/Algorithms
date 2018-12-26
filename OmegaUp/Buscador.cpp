//https://omegaup.com/arena/problem/Buscador

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int LCS(string cadena1, string cadena2)
{
    for (int i = 0; i < cadena.; i++)
    {
        for (int j = 0; j < count; j++)
        {
            /* code */
        }
    }
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
        P = LCS(dic[i], dic[0]);
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
