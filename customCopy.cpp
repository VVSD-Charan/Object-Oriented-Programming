#include <iostream>
#include <cstring>
using namespace std;

class person {
public:
    int age;
    char* name;

    // Default constructor
    person() : name(nullptr) {}

    // Copy constructor
    person(const person& p) {
        this->age = p.age;
        this->name = new char[strlen(p.name) + 1];
        strcpy(this->name, p.name);
    }
    // In copy constructor , object is passed by reference because , if we pass by value then a copy of object will be created which calls the same constructor again and this leads to infinite loop

    // Destructor to free allocated memory
    ~person() {
        delete[] name;
    }
};

int main() {
    person p1;
    p1.age = 20;
    p1.name = "Kohli";

    // Creating a new person object p2 using the copy constructor
    person p2(p1);
    cout << "P2 name initially " << p2.name << "\n";
    cout << "P2 age initially " << p2.age << "\n";

    p2.age = 30;
    p2.name = "Rohit";
    cout << "P1 age updated: " << p1.age << "\n";
    cout << "P2 age updated: " << p2.age << "\n";
    cout << "P2 name updated " << p2.name << "\n";

    return 0;
}
