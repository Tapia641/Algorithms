//https://omegaup.com/arena/problem/Canguros
#include <iostream>
#include <queue>
using namespace std;
#define FASTINPUT \
    cin.tie(0);   \
    ios_base::sync_with_stdio(0);

void function()
{
    FASTINPUT
    int C, N;
    queue<int> Q;
    char S;
    cin >> C >> N;
    while (N--)
    {
        cin >> S;
        if (S == 'N')
        {
            int M;
            cin >> M;
            Q.push(M + 1);
        }
        else if (S == 'A')
        {
            C -= Q.front();
            Q.pop();
        }
        else if (S == 'C')
        {
            cout << Q.size() << "\n";
        }
        else if (S == 'R')
        {
            cout << C << "\n";
        }
    }
}

main(int argc, char const *argv[])
{
    function();
    return 0;
}
