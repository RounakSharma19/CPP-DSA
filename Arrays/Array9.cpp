// Defining initilizing and accessing 2D array

#include <iostream>
using namespace std;

int main()
{
    int student_marks[6][5];

    int count = 1;

    for (int student = 0; student < 6; student++)
    {
        for (int subject = 0; subject < 5; subject++)
        {
            cin >> student_marks[student][subject];
        }
    }

    for (int student = 0; student < 6; student++)
    {
        for (int subject = 0; subject < 5; subject++)
        {
            cout << student_marks[student][subject] << " ";
        }
        cout << endl;
    }
    return 0;
}