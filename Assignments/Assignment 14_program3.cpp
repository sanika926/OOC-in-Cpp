//PROGRAM--LIST DEMONSTRATION//

#include <iostream>
#include <list>
using namespace std;

int main() {
    // ---- My Information ----
    cout << "Name: Sanika Anil Mane\n";
    cout << "Roll No: 96\n";
    cout << "Division: B\n";
    cout << "Class: SY CSE\n";
    cout << "---------------------------\n";

    // Define a list
    list<int> gqList{12, 45, 8, 6};

    // Display elements
    cout << "List Elements: ";
    for (auto i : gqList) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}


//OUTPUT//

/*
Name: Sanika Anil Mane
Roll No: 96
Division: B
Class: SY CSE
---------------------------
List Elements: 12 45 8 6
*/
