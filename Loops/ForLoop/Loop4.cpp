// Count digit
// input: 1024
// output: 4
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int digit_count = 0;
    for (int i = n; i > 0; i = i / 10)
    {
        digit_count++;
    }
    cout << "The number of digits in the number are " << digit_count << endl;
    return 0;
}