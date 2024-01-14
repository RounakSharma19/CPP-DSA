// Power of 2 without using flag

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n > 1)
    {
        if (n % 2 != 0)
        {
            cout << "number is not a power of 2" << endl;
            break;
        }
        n = n / 2;
    }
    if (n == 1)
    {
        cout << "number is a power of 2" << endl;
    }
    return 0;
}