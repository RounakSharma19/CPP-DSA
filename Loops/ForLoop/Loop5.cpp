// Sum of digits
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int digit_sum = 0;
    for (int num = n; num > 0; num /= 10)
    {
        digit_sum += num % 10;
    }
    cout << "Sum of all digits are " << digit_sum << endl;
    return 0;
}