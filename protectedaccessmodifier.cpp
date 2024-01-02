#include <iostream>
using namespace std;

class Person 
{
    protected :

    int age;
};

class Student : public Person
{
    public:

    void setAge(int age)
    {
        this->age = age;
    }

    int getAge()
    {
        return this->age;
    }
};

int main()
{
    Student charan;

    // charan.age;
    // This gives an error becuase protected proprties and methods cannot be used outside class and child classes . Public methods and properties can be accessed only within class and in subclasses only

    charan.setAge(20);
    cout<<charan.getAge()<<"\n";
    // We can use set and get functions within class or in subclass (derived class) to access protected methods and properties.
}