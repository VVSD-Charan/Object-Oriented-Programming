#include <iostream>
using namespace std;

class Person 
{
    int age;
    string weight;

    public:

    Person()
    {
        cout<<"Person is called\n";
    }

    Person(int age,string weight)
    {
        this->age = age;
        this->weight = weight;
    }

    void getDetails()
    {
        cout<<"Age is "<<this->age<<"\n";
        cout<<"Weight is "<<this->weight<<"\n";
    }
};

int main()
{
    Person charan;
    // Normal constructor will be called , which prints that person has been called 

    Person p(20,"70");
    p.getDetails();
    // This only calls parameterized constructor. So,it doesn't print that person has been called.

    Person* shyamsir = new Person(40,"200");
    shyamsir->getDetails();
    // Dynamically created objects work similar to statically created objects in terms of constructor functionality
}