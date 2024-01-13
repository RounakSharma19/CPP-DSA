// Given n and k print those number from 1 to n where sum of digit is equal to k

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = i; j > 10; j /= 10)
        {
            sum = sum + j % 10;
        }
        if (sum == k)
        {
            cout << " For the number " << i << " sum of digits is equal to " << k << endl;
        }
    }
    return 0;
}