#include <bits/stdc++.h>

using namespace std;

int countingValleys(int &n, string &s) {
    int cont = 0, res = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'U')
            cont++;
        else
            cont--;
        if (cont == 0)
            res++;
        
    }
    return res-1;
    
}

int main(int argc, char const *argv[])
{
    int n; string s;
    cin >> n >> s;
    cout<<countingValleys(n,s);
    return 0;
}
