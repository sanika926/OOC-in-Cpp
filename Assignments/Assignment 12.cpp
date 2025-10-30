//PROGRAM//


/* File Handling with C++ using ifstream & ofstream class object */
/* To write the content in a file */
/* Then to read the content of the file */

#include <iostream>
#include <fstream>  // header for ifstream, ofstream
#include <string>
using namespace std;

int main()
{


    // ---- My Information ---- 
  cout << "Name: Sanika Anil Mane\n"; 
  cout << "Roll No: 96\n"; 
  cout << "Division: B\n"; 
  cout << "Class: SY CSE\n"; 
  cout << "---------------------------\n";
  
    // Creation of ofstream class object
    ofstream fout;
    string line;

    // Open file in write mode (ios::out)
    // By default, ios::out mode automatically deletes the content of the file.
    // To append content, use ios::app mode.
    fout.open("sample.txt");

    // Execute loop if file opened successfully
    while (fout)
    {
        cout << "Enter text to write in file (Press -1 to stop): ";
        getline(cin, line);

        // Exit condition
        if (line == "-1")
            break;

        // Write line in file
        fout << line << endl;
    }

    // Close the file
    fout.close();

    // Creation of ifstream class object to read the file
    ifstream fin;
    fin.open("sample.txt");

    cout << "\nReading content from file:\n";

    // Execute loop until End Of File (EOF)
    while (getline(fin, line))
    {
        // Print line read from file on console
        cout << line << endl;
    }

    // Close the file
    fin.close();

    return 0;
}


//OUTPUT//

