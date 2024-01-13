// Number from 1ton that are divisible by 7 and are even
#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if ((i % 2 == 0) && (i % 7 == 0))
        {
            cout << i << " ";
        }
    }
    return 0;
}
