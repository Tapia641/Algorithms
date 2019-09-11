// https://www.hackerrank.com/challenges/ctci-ransom-note/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps

#include <iostream>
#include <vector>
#include <unordered_map> 

using namespace std;

string checkMagazine(vector<string> &magazine, vector<string> &note){
    unordered_map<string, int> myMap;

    for (int i = 0; i < magazine.size(); i++)
    {
        myMap[magazine[i]]++;
    }

    for (int i = 0; i < note.size(); i++)
    {
        myMap[note[i]]--;
    }

    for (auto i : myMap){
        if (i.second < 0)
        {
            return "No";
        }
    }

    return "Yes";

}

int main(int argc, char const *argv[])
{
    int N,M; string aux;
    cin >> M >> N;
    vector<string> magazine, note;

    for (int i = 0; i < M; i++)
    {
        cin >> aux;
        magazine.push_back(aux);
    }

    for (int i = 0; i < N; i++)
    {
        cin >> aux;
        note.push_back(aux);
    }

    cout << checkMagazine(magazine, note) << endl;
    
    
    return 0;
}
