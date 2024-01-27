#include <iostream>
using namespace std;

class Student
{
private:
    int roll_number;
    string name;
    int standard;
    char gender;
    string mob_number;
    char grade;

public:
    void setName()
    {
        cin >> name;
    }
    void getName()
    {
        cout << name << endl;
    }
};

int main()
{
    Student s;
    s.setName();
    s.getName();
}