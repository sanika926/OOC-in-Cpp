//PROGRAM//

#include <iostream>
using namespace std;

class Student {
    int roll;
    char name[25];
public:
    void getdata() {
        cout << "\n------------------------------";
        cout << "\nEnter Roll No.: ";
        cin >> roll;
        cout << "Enter Student Name: ";
        cin >> name;
    }

    void putdata() {
        cout << "\n------------------------------";
        cout << "\n******** Student Marklist ********";
        cout << "\n------------------------------";
        cout << "\nRoll No.: " << roll;
        cout << "\nStudent Name: " << name << endl;
    }
};

class StudentExam : public Student {
public:
    int sub1, sub2, sub3, sub4, sub5, sub6;
    void accept_data() {
        getdata();
        cout << "Enter Marks for Subject 1: "; cin >> sub1;
        cout << "Enter Marks for Subject 2: "; cin >> sub2;
        cout << "Enter Marks for Subject 3: "; cin >> sub3;
        cout << "Enter Marks for Subject 4: "; cin >> sub4;
        cout << "Enter Marks for Subject 5: "; cin >> sub5;
        cout << "Enter Marks for Subject 6: "; cin >> sub6;
    }
    void display_data() {
        putdata();
        cout << "\nMarks of Subject 1: " << sub1;
        cout << "\nMarks of Subject 2: " << sub2;
        cout << "\nMarks of Subject 3: " << sub3;
        cout << "\nMarks of Subject 4: " << sub4;
        cout << "\nMarks of Subject 5: " << sub5;
        cout << "\nMarks of Subject 6: " << sub6;
    }
};

int main() {
    StudentExam s;
    s.accept_data();
    s.display_data();
    return 0;
}





//OUTPUT//

Enter Roll No.: 101
Enter Student Name: Sanika
Enter Marks for Subject 1: 78
Enter Marks for Subject 2: 85
Enter Marks for Subject 3: 90
Enter Marks for Subject 4: 88
Enter Marks for Subject 5: 92
Enter Marks for Subject 6: 80

  ------------------------------
******** Student Marklist ********
------------------------------
Roll No.: 101
Student Name: Sanika
Marks of Subject 1: 78
Marks of Subject 2: 85
Marks of Subject 3: 90
Marks of Subject 4: 88
Marks of Subject 5: 92
Marks of Subject 6: 80
