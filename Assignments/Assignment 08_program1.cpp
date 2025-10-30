//PROGRAM//

#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;
    Distance(int f, int i) {
        this->feet = f;
        this->inch = i;
    }

    void operator--() {
        --feet;
        --inch;
    }

    void display() {
        cout << "\nFeet & Inches (Decrement): " << feet << " " << inch;
    }
};

int main() {

    
    // ---- My Information ---- 
    cout << "Name: Sanika Anil Mane\n"; 
    cout << "Roll No: 96\n"; 
    cout << "Division: B\n"; 
    cout << "Class: SY CSE\n"; 
    cout << "---------------------------\n";
    
    Distance d1(8, 9);
    --d1;
    d1.display();
    return 0;
}


//OUTPUT//

/*Name: Sanika Anil Mane
Roll No: 96
Division: B
Class: SY CSE
---------------------------
Feet & Inches (Decrement): 7 8
*/
