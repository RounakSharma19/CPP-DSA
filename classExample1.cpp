#include <iostream>
using namespace std;

class Couple
{
private:
    int first;
    int second;

public:
    Couple()
    {
        cout << "Hi I am the constructor with no arguments" << endl;
    }
    // initilizor
    Couple(int a, int b) : first(a), second(b)
    {
        cout << "Hi I am the constructor with 2 arguments" << endl;
    }
    Couple(int a) : first(a), second(10)
    {
        cout << "Hi I am the constructor with 1 argument" << endl;
    }
    Couple(Couple &obj)
    {
        first = obj.getFirst();
        second = obj.getSecond();
    }
    void setFirst(int a)
    {
        first = a;
    }
    void setSecond(int b)
    {
        second = b;
    }
    int getFirst()
    {
        return first;
    }
    int getSecond()
    {
        return second;
    }
    int multiply()
    {
        return first * second;
    }
    int multiply(int x)
    {
        return (first + x) * (second + x);
    }
    int multiply(int x, int y)
    {
        return (first + x) * (second + y);
    }
    int multiply(Couple obj)
    {
        return (first + obj.first) * (second + obj.second);
    }
    ~Couple()
    {
        cout << "I am the desctructor" << endl;
    }
};

int main()
{
    Couple couple_1(6, 5);
    Couple couple_2;
    Couple couple_3(4);
    Couple couple_4(couple_1);
    // couple_1.setFirst(6);
    // couple_1.setSecond(5);
    cout << couple_1.getFirst() << endl;
    cout << couple_1.getSecond() << endl;
    cout << couple_1.multiply() << endl;
    cout << couple_1.multiply(3) << endl;
    cout << couple_1.multiply(4, 5) << endl;
    cout << couple_1.multiply(couple_3);
    return 0;
}
