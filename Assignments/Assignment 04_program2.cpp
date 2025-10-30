//PROGRAM//

#include<iostream>
using namespace std;

class construct {
public:
    float area;

    // Constructor with no parameters
    construct() {
        area = 0;
    }

    // Constructor with two parameters
    construct(int a, int b) {
        area = a * b;
    }

    void disp() {
        cout << area << endl;
    }
};

int main() {
     // ---- My Information ----
    cout << "Name: Sanika Anil Mane\n"; 
    cout << "Roll No: 96\n"; 
    cout << "Division: B\n"; 
    cout << "Class: SY CSE\n"; 
    cout << "---------------------------\n";
    // Constructor Overloading
    // with two different constructors
    // of class name
    construct o;
    construct o2(10, 20);

    o.disp();
    o2.disp();

    return 1;
}




//OUTPUT//

/*Name: Sanika Anil Mane
Roll No: 96
Division: B
Class: SY CSE
---------------------------*/
0
200
