//PROGRAM//

#include <iostream>
using namespace std;

// First base class
class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle\n";
    }
};

// Second base class
class FourWheeler {
public:
    FourWheeler() {
        cout << "This is a Four Wheeler\n";
    }
};

// Derived class inherits from both base classes
class Car : public Vehicle, public FourWheeler {
public:
    Car() {
        cout << "This Four Wheeler Vehicle is a Car\n";
    }
};

int main() {
    
    // ---- My Information ---- 
    cout << "Name: Sanika Anil Mane\n"; 
    cout << "Roll No: 96\n"; 
    cout << "Division: B\n"; 
    cout << "Class: SY CSE\n"; 
    cout << "---------------------------\n";
    
    Car obj;   // Creating object of derived class
    return 0;
}


//OUTPUT//

/*Name: Sanika Anil Mane
Roll No: 96
Division: B
Class: SY CSE
---------------------------

This is a Vehicle
This is a Four Wheeler
This Four Wheeler Vehicle is a Car
*/
