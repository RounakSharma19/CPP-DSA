// check if the matrix is upper traingle or not

#include <iostream>
using namespace std;

int main()
{
    int ar[4][4] = {
        {1, 2, 3, 4},
        {0, 5, 6, 7},
        {0, 0, 8, 9},
        {0, 0, 0, 10},
    };
    int flag = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i > j)
            {
                if (ar[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 0)
            break;
    }
    if (flag == 1)
    {
        cout << " Yes its upper traiangular" << endl;
    }
    else
    {
        cout << "No it's not" << endl;
    }
}