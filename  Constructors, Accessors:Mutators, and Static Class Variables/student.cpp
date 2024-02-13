#include <iostream>
using namespace std;
#include <string>

#include "student.h"

// Constructor implementation
Student::Student() {}

Student::Student(const string& ln, const string& fn, const string& id, float g) {
    lname = ln;
    fname = fn;
    ID = id;
    gpa = g;
}

string Student::getLastName() const {
    return lname;
}

string Student::getFirstName() const {
    return fname;
}

string Student::getID() const {
    return ID;
}

float Student::getGPA() const {
    return gpa;
}

void Student::setLastName(const string& LN) {
    lname = LN;
}

void Student::setFirstName(const string& FN) {
    fname = FN;
}

void Student::setID(const string& studentID) {
    ID = studentID;
}

void Student::setGPA(float studentGPA) {
    gpa = studentGPA;
}

// Other member function implementations (input, output, etc.)

//***************************************************
// Simply input all the values of a student record
//***************************************************
void Student::input() {
cout << "Last name: ";
cin >> lname;
cout << "First name: ";
cin >> fname;
cout << "ID: ";
cin >> ID;
cout << "GPA: ";
cin >> gpa;
}
//***************************************************
// Simply output the student record, formatted.
//***************************************************
void Student::output() {
cout << fname << " " << lname << ", ID " << ID;
cout << " has a gpa of " << gpa << endl;
};
