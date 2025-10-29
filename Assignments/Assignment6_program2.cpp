//PROGRAM//

#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle\n";
    }
};

// First subclass
class Car : public Vehicle {
public:
    Car() {
        cout << "This Vehicle is Car\n";
    }
};

// Second subclass
class Bus : public Vehicle {
public:
    Bus() {
        cout << "This Vehicle is Bus\n";
    }
};

int main() {
    Car obj1;   // Constructor of Vehicle + Car
    Bus obj2;   // Constructor of Vehicle + Bus
    return 0;
}




//OUTPUT//

This is a Vehicle
This Vehicle is Car
This is a Vehicle
This Vehicle is Bus


