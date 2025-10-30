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

    // ---- My Information ---- 
    cout << "Name: Sanika Anil Mane\n"; 
    cout << "Roll No: 96\n"; 
    cout << "Division: B\n"; 
    cout << "Class: SY CSE\n"; 
    cout << "---------------------------\n";
    
    Car obj1;   // Constructor of Vehicle + Car
    Bus obj2;   // Constructor of Vehicle + Bus
    return 0;
}




//OUTPUT//

/*Name: Sanika Anil Mane
Roll No: 96
Division: B
Class: SY CSE
---------------------------

This is a Vehicle
This Vehicle is Car
This is a Vehicle
This Vehicle is Bus
*/
