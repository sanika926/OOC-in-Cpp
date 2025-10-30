//PROGRAM//

#include <iostream>
#include <exception>
using namespace std;

// Custom Exception Class
class MyException : public exception {
public:
    const char* what() const throw() {
        return "Attempted to divide by zero!\n";
    }
};

int main() {
    // ---- My Information ----
  cout << "Name: Sanika Anil Mane\n";
  cout << "Roll No: 96\n"; 
  cout << "Division: B\n"; 
  cout << "Class: SY CSE\n"; 
  cout << "---------------------------\n";
    int x, y;
    cout << "Enter the two numbers: " << endl;
    cin >> x >> y;

    try {
        if (y == 0) {
            MyException z;
            throw z;   // Throwing custom exception
        } else {
            cout << "x / y = " << x / y << endl;
        }
    }
    catch (exception &e) {
        cout << e.what();
    }

    return 0;
}
