//PROGRAM//

#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imaginary;

    // Default constructor
    Complex() : real(0), imaginary(0) {}

    // Parameterized constructor
    Complex(int r, int i) : real(r), imaginary(i) {}

    // Member function to add two complex numbers and return result
    Complex addComplex(const Complex &c2) const {
        Complex res;
        res.real = this->real + c2.real;
        res.imaginary = this->imaginary + c2.imaginary;
        return res;
    }

    // Helper to print complex number in form "a + i b"
    void print() const {
        cout << real << " + i" << imaginary << endl;
    }
};

int main() {
    // ---- My Information ----
    cout << "Name: Sanika Anil Mane\n";
    cout << "Roll No: 96\n";
    cout << "Division: B\n";
    cout << "Class: SY CSE\n";
    cout << "---------------------------\n";

    // create objects
    Complex c1(4, 5);
    Complex c2(8, 9);

    cout << "Complex number 1: ";
    c1.print();

    cout << "Complex number 2: ";
    c2.print();

    // add and display
    Complex c3 = c1.addComplex(c2);
    cout << "Sum of complex number: ";
    c3.print();

    // another example from your notes
    Complex A(2, 7), B(10, 6);
    cout << "\nComplex number 1: ";
    A.print();
    cout << "Complex number 2: ";
    B.print();
    Complex C = A.addComplex(B);
    cout << "Sum of complex number: ";
    C.print();

    return 0;
}


//OUTPUT//

/*Name: Sanika Anil  Mane
Roll No: 96
Division: B
Class: SY CSE
---------------------------
Complex number 1: 4 + i5
Complex number 2: 8 + i9
Sum of complex number: 12 + i14

Complex number 1: 2 + i7
Complex number 2: 10 + i6
Sum of complex number: 12 + i13*/
