//PROGRAM--MAP DEMONSTRATION//

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // ---- My Information ----
    cout << "Name: Sanika Anil Mane\n";
    cout << "Roll No: 96\n";
    cout << "Division: B\n";
    cout << "Class: SY CSE\n";
    cout << "---------------------------\n";

    // Create a map of strings to integers
    map<string, int> mp;

    // Insert some values
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;

    // Display map contents
    cout << "Map Elements:\n";
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
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
Map Elements:
Key: one, Value: 1
Key: three, Value: 3
Key: two, Value: 2
*/
