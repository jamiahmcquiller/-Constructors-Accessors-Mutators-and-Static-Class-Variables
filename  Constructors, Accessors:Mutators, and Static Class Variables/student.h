#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;



class Student {
public:

    void input(); // Read a student record in using cin.
    void output(); // Print out the student record, slightly formatted
    // Constructors
    Student(); // Default constructor
    Student(const string& ln, const string& fn, const string& id, float g); // Parameterized constructor

    // Accessor functions
    string getLastName() const;
    string getFirstName() const;
    string getID() const;
    float getGPA() const;

    // Mutator functions
    void setLastName(const string& LN);
    void setFirstName(const string& FN);
    void setID(const string& studentID);
    void setGPA(float studentGPA);

    // Other member functions (input, output, etc.)

private:
    string lname; // Last name
    string fname; // First name
    string ID;    // ID
    float gpa;    // GPA
};

#endif // STUDENT_H
