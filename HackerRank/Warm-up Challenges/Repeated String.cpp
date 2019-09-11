//https://www.hackerrank.com/challenges/repeated-string/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void repeatedString() {
    
    // Data
    string myString; long long n; int number, extra, total = 0;
    cin >> myString >> n;

    // Count number of a's
    number = count(myString.begin(), myString.end(), 'a');
    extra = n%myString.size();

    // Coutn last string with a's
    for (int i = 0; i < extra; i++)
    {
        if (myString[i] == 'a')
        {
            total++;
        }
        
    }
    
    cout << (number* (n/myString.size()) ) + total<< endl;
}

int main(int argc, char const *argv[])
{
    repeatedString();
    return 0;
}
