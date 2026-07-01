#include <iostream>
using namespace std;

class Person
{
public:
    void showName()
    {
        cout << "Name: Ali" << endl;
    }
};

class Student : virtual public Person
{
};

class Employee : virtual public Person
{
};

class TeachingAssistant : public Student, public Employee
{
};

int main()
{
    TeachingAssistant ta;

    // No ambiguity
    ta.showName();

    return 0;
}