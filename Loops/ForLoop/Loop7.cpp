// HCF of 2 number
#include <iostream>
using namespace std;

int main()
{

    int num1, num2, smaller_number;
    cin >> num1, num2;
    int hcf = 1;
    if (num1 < num2)
    {
        smaller_number = num1;
    }
    else
    {
        smaller_number = num2;
    }
    for (int i = 1; i < smaller_number; i++)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            hcf = i;
        }
    }
    cout << " The hcf of given number is " << hcf;

    return 0;
}