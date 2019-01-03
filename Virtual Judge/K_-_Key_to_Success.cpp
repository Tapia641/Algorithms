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

    if (a.Count != b.Count)
        return a.Count < b.Count;
    else
        return a.Index > b.Index;
}

void Sorting(string &cadena)
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

    for (int i = 0; i < cadena.size(); i++)
    {
        cout << data[i].Element << "\t";
        cout << data[i].Count << "\t";
        cout << data[i].Index << endl;
    }
}

void function()
{
    int N;
    cin >> N;
    string firstString, secondString;
    struct myVector data1[firstString.size()], data2[secondString.size()];

    while (N--)
    {
        cin >> firstString >> secondString;
        Sorting(firstString);
        Sorting(secondString);
    }
}

main(int argc, char const *argv[])
{
    function();
    return 0;
}
