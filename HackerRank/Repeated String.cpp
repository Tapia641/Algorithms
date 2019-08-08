//https://www.hackerrank.com/challenges/repeated-string/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup

#include <iostream>

using namespace std;

void repeatedString()
{
    string s;
    long long n, cont = 0, tam = 0;
    cin >> s >> n;

    //Contamos la cantidad de "a"
    for (int i = 0; i < s.size(); i++)
        if (s[i] == 'a')
            tam++;
    // abaabaabaa = 7
    cout << (n / tam) + (n % s.size() * tam) << endl;
}

int main(int argc, char const *argv[])
{
    repeatedString();
    return 0;
}
