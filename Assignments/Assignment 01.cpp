//PROGRAM//


#include <iostream>
using namespace std;

class Student {
private:
    char name[30];
    int rollNo;
    float marks;

public:
    // Member function to input student details
    void inputDetails() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks: ";
        cin >> marks;
    }

    // Member function to display student details
    void displayDetails() {
        cout << "\nStudent Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    // ---- My Information ----
    cout << "Name: Sanika  Anil Mane\n";
    cout << "Roll No: 96\n";
    cout << "Division: B\n";
    cout << "Class: SY CSE\n";
    cout << "---------------------------\n";

    Student obj;

    // Input student details
    obj.inputDetails();

    // Display student details
    cout << "\nStudent Details:\n";
    obj.displayDetails();

    return 0;
}



//OUTPUT//

/*Name: Sanika Anil Mane
Roll No: 96
Division: B
Class: SY CSE
---------------------------
Enter student name: Riya
Enter roll number: 45
Enter marks: 87

Student Details:
Student Name: Riya
Roll Number: 45
Marks: 87*/

