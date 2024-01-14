// Power of 2 using flag

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int flag = 0;
    while (n > 1)
    {
        if (n == 1)
        {
            cout << "number is not power of 2" << endl;
            flag = 1;
            break;
        }
        n = n / 2;
    }
    if (flag == 0)
    {
        cout << "Number is a power of 2" << endl;
    }
    return 0;
}