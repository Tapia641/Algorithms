#include <iostream>
#include <string>
using namespace std;

void to_lower(string &cad)
{
    for (int i = 0; i < cad.size(); i++)
    {
        if (cad[i] <= 'Z' && cad[i] >= 'A')
            cad[i] = cad[i] - ('A' - 'a');
    }
}

bool isPalindrome(string word)
{
    int left = 0, right = word.size() - 1;
    to_lower(word);
    while (left <= right)
    {
        if (word[left] != word[right])
            return false;
        left++;
        right--;
    }
    return true;
}
int main()
{
    string word;
    cin >> word;
    cout << isPalindrome(word) << endl;
}