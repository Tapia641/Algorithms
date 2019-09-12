#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void twoStrings(int &P){
    string aux;
    vector<string> sol, myVec;
    unordered_map<char, int> myMap;
    bool aprobado = false;

    for (int i = 0; i < P; i++){
        
        aprobado = false;
        cin >> aux;
        
        for (int j = 0; j < aux.size(); j++)
        {
            if (myMap[aux[j]] == 0)
            {
                myMap[aux[j]]++;
            }
            
        }

        cin >> aux;

        for (int j = 0; j < aux.size(); j++)
        {
            if (myMap[aux[j]] == 1)
            {
                sol.push_back("YES");
                aprobado = true;
                break;
            }
        }


        if (!aprobado)
            sol.push_back("NO");
        
        myMap.clear();
    }

    for (auto x : sol){
        cout << x << '\n';
    }
   
}

int main(int argc, char const *argv[])
{
    int P;
    cin >> P;
    twoStrings(P);

    return 0;
}

