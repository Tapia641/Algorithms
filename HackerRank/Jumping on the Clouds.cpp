//https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup

#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector<short> &c) {
    int cont = 0, zero = 0;
    for (int i = 0; i < c.size(); i++)
    {
        if (c[i] == 0)
        {
            zero++;
        }else{
            if (zero == 2)
            {
                cont += 2;
            }else{
                if (zero == 1)
                {
                    cont++;
                }
            }
            zero = 1;
            i++;
        }

        if (zero == 3)
        {
            zero = 1;
            cont++; 
        }
    }

    if (zero == 2)
    {
        cont++;
    }
    
    return cont;
}

int main(int argc, char const *argv[])
{
    int n, aux;
    vector<short> c;
    cin>>n;
    while(n--){
        cin >> aux;
        c.push_back(aux);
    }
    cout<<jumpingOnClouds(c);
    return 0;
}
