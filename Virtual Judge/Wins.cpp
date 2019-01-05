/*
In this question, the candidate with the highest number of votes wins

If two or more candidates have the same number of votes, then the candidate whose name appears last alphabetically, wins.
Consider the following votes : ['Glenn', 'Emily', 'Emily', 'Glenn']. Each candidate received 2 votes but Glenn comes later alphabetically than Emily, so return Glenn.

string voteWinner(vector<string> votes)
function voteWinner should return a string with the name of the winner.
appears last alphabetically
*/

#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

#define FASTINPUT \
    cin.tie(0);   \
    ios_base::sync_with_stdio(0);

struct myVector
{
    string Name;
    int Count = 0;
};

bool mycomp(string a, string b)
{
    return a[0] < b[0];
}

int find_Element(string &cad, vector<string> &v)
{
    int tam = v.size(), cont = 0;
    for (int i = 0; i < tam; i++)
    {
        if (cad == v[i])
            cont++;
    }
    return cont;
}

string voteWinner(vector<string> &votes)
{
    vector<string> nuevos;
    int tam = votes.size(), m = 0, pos = 0, i;
    struct myVector v[votes.size()];

    for (i = 0; i < tam; i++)
    {
        v[i].Name = votes[i];
        v[i].Count = find_Element(v[i].Name, votes);
        votes[i] = "";
    }
    /*
    for (int i = 0; i < tam; i++)
    {
        cout << v[i].Name << " " << v[i].Count << endl;
    }
*/
    for (i = 0; i < tam; i++)
    {
        if (v[i].Count > m)
        {
            m = v[i].Count;
            pos = i;
        }
    }

    nuevos.push_back(v[pos].Name);
    bool f = false;

    for (i = 0; i < tam; i++)
    {
        if (i != pos)
        {
            if (m == v[i].Count)
            {
                f = true;
                nuevos.push_back(v[i].Name);
            }
        }
    }

    if (f)
    {
        sort(nuevos.begin(), nuevos.end(), mycomp);
        return nuevos[nuevos.size() - 1];
    }
    else
        return v[pos].Name;
}

int main()
{
    int votes_count;
    cin >> votes_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<string> votes(votes_count);
    for (int i = 0; i < votes_count; i++)
    {
        string votes_item;
        getline(cin, votes_item);
        votes[i] = votes_item;
    }
    cout << voteWinner(votes) << endl;
}