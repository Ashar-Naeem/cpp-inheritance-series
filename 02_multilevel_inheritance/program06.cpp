#include <iostream>
using namespace std;

class Grandfather {
public:
    void house() {
        cout << "Grandfather's House" << endl;
    }
};

class Father : public Grandfather {
public:
    void car() {
        cout << "Father's Car" << endl;
    }
};

class Son : public Father {
public:
    void bike() {
        cout << "Son's Bike" << endl;
    }
};

int main() {
    Son s;

    s.house();
    s.car();
    s.bike();

    return 0;
}