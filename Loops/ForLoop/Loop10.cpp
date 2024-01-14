// Dimond pattern
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int stars = i * 2 - 1;
        int space = n - i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < n - 1; i++)
    {
        int stars = 2 * (n - i) - 1;
        int spaces = i;
        for (int j = 1; j < spaces; j++)
        {
            cout << "*";
        }
        for (int j = 1; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}