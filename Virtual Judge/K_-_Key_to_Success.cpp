/*

Datos tomados en cuenta:
https://www.geeksforgeeks.org/sort-elements-by-frequency/
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct myVector
{
    char Element;
    int Index, Count;
};

bool comp1(struct myVector a, struct myVector b)
{
    return a.Element < b.Element;
}

bool comp2(struct myVector a, struct myVector b)
{

    if (a.Count != b.Count)
        return a.Count < b.Count;
    else
        return a.Index > b.Index;
}

void Sorting(string &cadena, vector<pair<char, int>> &v)
{
    struct myVector data[cadena.size()];
    for (int i = 0; i < cadena.size(); i++)
    {
        data[i].Element = cadena[i];
        data[i].Index = i;
        data[i].Count = 0;
    }
    sort(data, data + cadena.size(), comp1);

    for (int i = 0; i < cadena.size(); i++)
    {
        if (data[i].Element == data[i - 1].Element)
        {
            data[i].Count = data[i - 1].Count + 1;
            data[i - 1].Count = -1;
            data[i].Index = data[i - 1].Index;
        }
        else
        {
            data[i].Count = 1;
        }
    }

    sort(data, data + cadena.size(), comp2);

    pair<char, int> p;
    for (int i = cadena.size() - 1; i > 0; i--)
    {
        if (data[i].Count == -1)
            break;
        else
        {
            p.first = data[i].Element;
            p.second = data[i].Count;
            v.push_back(p);
        }
    }
}

void Solution(vector<pair<char, int>> &v1, vector<pair<char, int>> &v2)
{
    pair<char, int> p;
    for (int i = 0; i < v1.size(); i++)
    {
        p = v1[i];
        cout << p.first << "\t" << p.second << endl;
    }
    for (int i = 0; i < v2.size(); i++)
    {
        p = v2[i];
        cout << p.first << "\t" << p.second << endl;
    }
}

void function()
{
    int N;
    cin >> N;
    string firstString, secondString;
    while (N--)
    {
        vector<pair<char, int>> v1, v2;
        cin >> firstString >> secondString;
        Sorting(firstString, v1);
        Sorting(secondString, v2);
        Solution(v1, v2);
    }
}

main(int argc, char const *argv[])
{
    function();
    return 0;
}
