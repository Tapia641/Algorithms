//https://omegaup.com/arena/problem/lapizlazuli 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int function()
{
    vector<int> v(3), t(3);
    int X;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &X);
        v[i] = X;
    }

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &X);
        t[i] = X;
    }

    sort(v.begin(), v.end());
    sort(t.begin(), t.end());

    for (int i = 0; i < 3; i++)
    {
        if (t[i] < v[i])
        {
            return 0;
        }
    }
    return 1;
}

main(int argc, char const *argv[])
{
    cout << function();
    return 0;
}
