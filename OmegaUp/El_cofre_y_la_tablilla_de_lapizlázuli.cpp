//https://omegaup.com/arena/problem/lapizlazuli

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void function()
{
    vector<int> v(6);
    int X;
    
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &X);
        v[i] = X;
    }
    sort(v.begin(), v.end());
}

main(int argc, char const *argv[])
{
    function();
    return 0;
}
