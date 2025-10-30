//PROGRAM--Template Function//

#include <iostream>
#include <string>
using namespace std;

// Template function to find maximum
template <typename T>
inline T const& Max(T const& a, T const& b) {
    return a < b ? b : a;
}

int main() {
    // ---- My Information ----
    cout << "Name: Sanika Anil Mane\n";
    cout << "Roll No: 96\n";
    cout << "Division: B\n";
    cout << "Class: SY CSE\n";
    cout << "---------------------------\n";

    int i = 39, j = 20;
    cout << "Max(i, j): " << Max(i, j) << endl;

    double f1 = 13.5, f2 = 20.7;
    cout << "Max(f1, f2): " << Max(f1, f2) << endl;

    string s1 = "Hello", s2 = "World";
    cout << "Max(s1, s2): " << Max(s1, s2) << endl;

    return 0;
}


//OUTPUT//
/*
Name: Sanika Anil Mane
Roll No: 96
Division: B
Class: SY CSE
---------------------------
Max(i, j): 39
Max(f1, f2): 20.7
Max(s1, s2): World
*/
