#include <iostream>
#include <string>
using namespace std;
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
class Employee {
protected:
    int employeeID;
    double salary;

public:
    void setEmployeeData(int id, double sal) {
        employeeID = id;
        salary = sal;
    }

    void displayEmployeeData() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }
};
class Teacher : public Person, public Employee {
private:
    string subject;

public:
    void setTeacherData(string sub) {
        subject = sub;
    }

    void displayTeacherData() {
        cout << "\n===== Teacher Information =====" << endl;
        displayPersonData();
        displayEmployeeData();

        cout << "Subject: " << subject << endl;
    }
};
int main() {

    Teacher t1;

    // Setting data
    t1.setPersonData("Ali Khan", 35);
    t1.setEmployeeData(1023, 75000);
    t1.setTeacherData("Object Oriented Programming");

    // Displaying data
    t1.displayTeacherData();

    return 0;
}