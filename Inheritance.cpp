#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "I am the constructor of class Vehicle" << endl;
    }
    int numWheels;
    string make;
    string model;
    string toString()
    {
        return make + " -> " + model;
    }
    virtual ~Vehicle() // to delete the heap space for car
    {
        cout << "I am the destructor of class Vehicle" << endl;
    }
};

class Car : public Vehicle
{
public:
    Car()
    {
        cout << "I am the constructor of class Car" << endl;
    }
    bool sunroof;
    int airbags;
    int engineCap;
    int topSpeed;
    string toString()
    {
        return make + " -> " + model + to_string(topSpeed);
    }
    ~Car()
    {
        cout << "I am the destructor of class Vehicle" << endl;
    }
};

class Truck : public Vehicle
{
public:
    Truck()
    {
        cout << "I am the constructor of class truck" << endl;
    }
    bool covered;
    int volume;
    int weightCapacity;
    int currentWeight;
    ~Truck()
    {
        cout << "I am the destructor of class truck" << endl;
    }
};

class Bus : public Vehicle
{
public:
    Bus()
    {
        cout << "I am the constructor of bus truck" << endl;
    }
    bool AC;
    float rating;
    int numSeats;
    int curSeated;
    ~Bus()
    {
        cout << "I am the destructor of class bus" << endl;
    }
};

int main()
{
    // {
    //     Car car // destructor will be called immideatily because its in scope
    // },
    Car car;
    Bus bus;
    Car *ptr = new Car;
    Vehicle *ptr = new Vehicle; // run time polymorphism
    Vehicle *ptr_car = new Car;
    Vehicle *ptr_bus = new Bus;
    cout << (*ptr_car).toString() << endl;
    car.model = "Create";
    car.make = "Hyundai";
    car.topSpeed = 400;
    cout << car.toString() << endl;
    Vehicle *ptr_truck = new Truck;

    Vehicle *ptr = new Car;
    // ptr->model = "G Wagon";
    (*ptr).model = "G Wagon";
    (*ptr).make = "Mercedes";
    cout << (*ptr).toString() << endl;

    delete ptr;
    delete ptr_car;
    delete ptr_bus;
    delete ptr_truck;

    return 0;
}