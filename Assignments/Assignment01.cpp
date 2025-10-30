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
    Student obj;

    // Input student details
    obj.inputDetails();

    // Display student details
    cout << "\nStudent Details:\n";
    obj.displayDetails();

    return 0;
}



//OUTPUT//

Enter student name: sanika
Enter roll number: 96
Enter marks: 80

Student Details:

Student Name: sanika
Roll Number: 96
Marks: 80

