//PROGRAM--VECTOR DEMONSTRATION//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // ---- My Information ----
    cout << "Name: Sanika Anil Mane\n";
    cout << "Roll No: 96\n";
    cout << "Division: B\n";
    cout << "Class: SY CSE\n";
    cout << "---------------------------\n";

    // Initialize a vector of int type
    vector<int> numbers = {1, 100, 10, 70, 100};

    // Print the vector
    cout << "Vector Elements: ";
    for (auto num : numbers) {
        cout << num << " ";
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
Vector Elements: 1 100 10 70 100
*/
