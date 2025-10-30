//PROGRAM//

#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

class Shape {
public:
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double rad) : radius(rad) {}
    double calculateArea() const override {
        return PI * pow(radius, 2);
    }
    double calculatePerimeter() const override {
        return 2 * PI * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double len, double wid) : length(len), width(wid) {}
    double calculateArea() const override {
        return length * width;
    }
    double calculatePerimeter() const override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double side1, side2, side3;
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}
    double calculateArea() const override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    double calculatePerimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {

    // ---- My Information ---- 
  cout << "Name: Sanika Anil Mane\n"; 
  cout << "Roll No: 96\n"; 
  cout << "Division: B\n"; 
  cout << "Class: SY CSE\n"; 
  cout << "---------------------------\n";
  
    Circle circle(7.0);
    Rectangle rectangle(4.2, 8.0);
    Triangle triangle(4, 4, 5.2);

    cout << "Circle:" << endl;
    cout << "Area = " << circle.calculateArea() << endl;
    cout << "Perimeter = " << circle.calculatePerimeter() << endl;

    cout << "\nRectangle:" << endl;
    cout << "Area = " << rectangle.calculateArea() << endl;
    cout << "Perimeter = " << rectangle.calculatePerimeter() << endl;

    cout << "\nTriangle:" << endl;
    cout << "Area = " << triangle.calculateArea() << endl;
    cout << "Perimeter = " << triangle.calculatePerimeter() << endl;

    return 0;
}


//OUTPUT//

/*Name: Sanika Anil Mane
Roll No: 96
Division: B
Class: SY CSE
---------------------------
Circle:
Area = 153.938
Perimeter = 43.9823

Rectangle:
Area = 33.6
Perimeter = 24.4

Triangle:
Area = 7.8
Perimeter = 13.2
*/
