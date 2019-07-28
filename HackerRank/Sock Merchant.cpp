//https://www.hackerrank.com/challenges/sock-merchant/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup

#include <iostream>
#include <vector>

using namespace std;

vector<int> v(101, 0);

int sockMerchant(int &n, vector<int> &ar)
{
    int cont = 0;

    for (int i = 0; i < ar.size(); i++)
    {
        v[ar[i]]++;
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 1)
        {
            if (v[i] % 2 == 0)
            {
                cont += v[i] / 2;
            }
            else
            {
                cont += (v[i] - 1) / 2;
            }
        }
    }
    return cont;
}

int main(int argc, char const *argv[])
{
    int n;
    int aux;
    vector<int> arr;
    cin >> n;
    while (n--)
    {
        cin >> aux;
        arr.push_back(aux);
    }
    cout << sockMerchant(n, arr)<<endl;
    return 0;
}
