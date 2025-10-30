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

// Another base class
class Fare {
public:
    Fare() {
        cout << "Fare of Vehicle\n";
    }
};

// Derived class 1
class Car : public Vehicle {
public:
    Car() {
        cout << "This Vehicle is a Car\n";
    }
};

// Derived class 2 (inherits from Vehicle + Fare)
class Bus : public Vehicle, public Fare {
public:
    Bus() {
        cout << "This Vehicle is a Bus with Fare\n";
    }
};

int main() {

    // ---- My Information ---- 
    cout << "Name: Sanika Anil Mane\n"; 
    cout << "Roll No: 96\n"; 
    cout << "Division: B\n"; 
    cout << "Class: SY CSE\n"; 
    cout << "---------------------------\n";
    
    Bus obj2;  // Creating object of Bus class
    return 0;
}



//OUTPUT//

/*Name: Sanika Anil Mane
Roll No: 96
Division: B
Class: SY CSE
---------------------------

This is a Vehicle
Fare of Vehicle
This Vehicle is a Bus with Fare
*/
