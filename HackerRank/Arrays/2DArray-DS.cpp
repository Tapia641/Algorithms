//https://www.hackerrank.com/challenges/2d-array/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays

#include <iostream>
#include <vector>

using namespace std;

int HourglassSum(vector<vector<int>> &v){

    // Vector of solution
    vector<vector<int>> resp(4, vector<int>(4,0));

    int sumTem = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++){
            
            sumTem += v[i][j];

            if (j > 2)
            {                
                if (i > 2)
                {
                    resp[i-2][j-3] += sumTem;
                }else{
                    resp[i][j-3] += sumTem;
                }
                sumTem -= v[i][j-3];
            }
  
             cout<<sumTem<<endl;
        }
        sumTem = 0;
    }


    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<resp[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}

int main(int argc, char const *argv[])
{
    int n;
    vector<vector<int>> v(6, vector<int>());

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> n;
            v[i].push_back(n);
        }
    }
    
    HourglassSum(v);

    return 0;
}
