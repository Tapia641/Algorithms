/*

Datos tomados en cuenta:
https://www.geeksforgeeks.org/sort-elements-by-frequency/
*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct myVector
{
    string Element;
    int Index, Count;
};

bool comp1(struct myVector a, struct myVector b)
{
    return a.Element < b.Element;
}

bool comp2(struct myVector a, struct myVector b)
{
    return a.Element < b.Element;
}

void Sorting(string &cadena, string &cadena2)
{
    struct myVector data[cadena.size()];
    for (int i = 0; i < cadena.size(); i++)
    {
        data[i].Element = cadena[i];
        data[i].Index = i;
        data[i].Count = 0;
    }
    sort(data, data + cadena.size(), comp1);
    /*
    for (int i = 0; i < cadena.size(); i++)
    {
        cout << data[i].Element << "\t";
        cout << data[i].Index << "\t";
        cout << data[i].Count << endl;
    }
    */
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
}

void function()
{
    int N;
    cin >> N;
    string firstString, secondString;
    while (N--)
    {
        cin >> firstString >> secondString;
        Sorting(firstString, secondString);
    }
}

main(int argc, char const *argv[])
{
    function();
    return 0;
}
