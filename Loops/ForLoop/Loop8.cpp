// Find perfect number till N
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int factor_sum = 0;
        for (int j = 1; j < i - 1; j++)
        {
            if (i % j == 0)
            {
                factor_sum += i;
            }
        }
        if (factor_sum == i)
        {
            cout << "The number " << i << "is a perfect Number " << endl;
        }
    }
    return 0;
}