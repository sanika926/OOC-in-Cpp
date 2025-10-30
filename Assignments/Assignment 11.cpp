//PROGRAM//

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int no;
    string name;

public:
    virtual void salary() = 0; // pure virtual function
    void getdata() {
        cout << "Enter employee number: ";
        cin >> no;
        cout << "Enter employee name: ";
        cin >> name;
    }
    virtual void display() {
        cout << "\nEmployee number: " << no;
        cout << "\nEmployee name: " << name;
    }
};

// -------------------- Derived Class 1 --------------------
class SalariedEmployee : public Employee {
private:
    double monthly_salary;

public:
    void salary() {
        cout << "Enter monthly salary: ";
        cin >> monthly_salary;
    }
    void display() {
        Employee::display();
        cout << "\nMonthly Salary: " << monthly_salary << endl;
    }
};

// -------------------- Derived Class 2 --------------------
class HourlyEmployee : public Employee {
private:
    double hours;
    double rate;

public:
    void salary() {
        cout << "Enter hours worked: ";
        cin >> hours;
        cout << "Enter hourly rate: ";
        cin >> rate;
    }
    void display() {
        Employee::display();
        cout << "\nSalary: " << hours * rate << endl;
    }
};

// -------------------- Derived Class 3 --------------------
class CommissionedEmployee : public Employee {
private:
    double salary_base;
    double overtime;

public:
    void salary() {
        cout << "Enter base salary: ";
        cin >> salary_base;
        cout << "Enter overtime: ";
        cin >> overtime;
    }
    void display() {
        Employee::display();
        cout << "\nTotal Salary: " << (salary_base + overtime) << endl;
    }
};

// -------------------- Main Function --------------------
int main() {

    // ---- My Information ---- 
     cout << "Name: Sanika Anil Mane\n"; 
     cout << "Roll No: 96\n"; 
     cout << "Division: B\n"; 
     cout << "Class: SY CSE\n"; 
     cout << "---------------------------\n";

  
    Employee* emp[3];
    SalariedEmployee s;
    HourlyEmployee h;
    CommissionedEmployee c;

    emp[0] = &s;
    emp[1] = &h;
    emp[2] = &c;

    for (int i = 0; i < 3; i++) {
        emp[i]->getdata();
        emp[i]->salary();
    }

    cout << "\n----- Employee Details -----\n";
    for (int i = 0; i < 3; i++) {
        emp[i]->display();
        cout << "\n---------------------------\n";
    }

    return 0;
}


//OUTPUT//

/*
Name: Sanika Anil Mane
Roll No: 96
Division: B
Class: SY CSE
---------------------------
Enter employee number: 101
Enter employee name: Riya
Enter monthly salary: 30000

Enter employee number: 102
Enter employee name: Aditya
Enter hours worked: 160
Enter hourly rate: 200

Enter employee number: 103
Enter employee name: Sneha
Enter base salary: 25000
Enter overtime: 5000

----- Employee Details -----
Employee number: 101
Employee name: Riya
Monthly Salary: 30000
---------------------------
Employee number: 102
Employee name: Aditya
Salary: 32000
---------------------------
Employee number: 103
Employee name: Sneha
Total Salary: 30000
---------------------------
*/
