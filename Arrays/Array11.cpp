#include <iostream>
using namespace std;

int main()
{

    int arr[4][3] = {
        {3, 5, 6},
        {7, 2, 3},
        {10, 1, 7},
        {9, 7, 3},
    };

    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << "The sum doe the  " << i + 1 << " row is " << sum << endl;
    }

    return 0;
}