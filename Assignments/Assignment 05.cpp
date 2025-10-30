//PROGRAM//

#include<iostream>
using namespace std;

int area(int);
int area(int, int);
float area(float);
float area(float, float);

int main() {

    // ---- My Information ---- 
    cout << "Name: Sanika Anil Mane\n"; 
    cout << "Roll No: 96\n"; 
    cout << "Division: B\n"; 
    cout << "Class: SY CSE\n"; 
    cout << "---------------------------\n";
    
    int s, l, b;
    float r, bs, ht;

    cout << "Enter side of a square: ";
    cin >> s;

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter base and height of triangle: ";
    cin >> bs >> ht;

    cout << "\nArea of square is: " << area(s);
    cout << "\nArea of rectangle is: " << area(l, b);
    cout << "\nArea of circle is: " << area(r);
    cout << "\nArea of triangle is: " << area(bs, ht);

    return 0;
}

// Function definitions
int area(int s) {
    return (s * s);
}

int area(int l, int b) {
    return (l * b);
}

float area(float r) {
    return (3.14f * r * r);
}

float area(float bs, float ht) {
    return ((bs * ht) / 2);
}




//OUTPUT//

/*Name: Sanika Anil Mane
Roll No: 96
Division: B
Class: SY CSE
---------------------------
Enter side of a square: 5
Enter length and breadth of rectangle: 10 20
Enter radius of circle: 3
Enter base and height of triangle: 4 6

Area of square is: 25
Area of rectangle is: 200
Area of circle is: 28.26
Area of triangle is: 12*/
