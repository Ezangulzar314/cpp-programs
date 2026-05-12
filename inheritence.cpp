// inheritance.cpp
#include <iostream>
using namespace std;

// Base Class
class Person {
protected:
    string name;
    int age;

public:
    void setPersonData(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class
class Student : public Person {
private:
    int rollNumber;
    float marks;

public:
    void setStudentData(int r, float m) {
        rollNumber = r;
        marks = m;
    }

    void displayStudentData() {
        displayPersonData();

        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    Student s1;

    s1.setPersonData("Ezan", 20);
    s1.setStudentData(101, 89.5);

    cout << "Student Details:\n";
    s1.displayStudentData();

    return 0;
}