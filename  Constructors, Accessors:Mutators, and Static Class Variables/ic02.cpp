#include <iostream>

#include "student.h"


using namespace std;

//*******************************************************************
// Program:	in-class exercise #2
// Author:	Miah McQuiller
// Date:	09/06/22 and 09/08/22
// This program creates instances of class Student and demonstrates
// the use of various features of the class
//*******************************************************************

int main() {
    Student s1;
    s1.input(); // Assuming there is an input() method in the Student class

    s1.output(); // Assuming there is an output() method in the Student class

    // Creating another student with the parameterized constructor
    Student s2("McQuiller", "Miah", "76168198", 3.7f);
    cout << "\nStudent Information(s2):" << endl;
    s2.output(); // Displaying the second student's information

    // The next lines are examples of using accessor functions
    cout << "\nAccessing Information Using Accessor Functions:" << endl;
    cout << "Last Name of s1: " << s1.getLastName() << endl;
    cout << "First Name of s1: " << s1.getFirstName() << endl;
    cout << "ID of s1: " << s1.getID() << endl;
    cout << "GPA of s1: " << s1.getGPA() << endl;

    s1.setLastName("Chamberlain");

    return 0;
}
