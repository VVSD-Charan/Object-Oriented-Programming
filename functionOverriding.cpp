#include <iostream>
using namespace std;

class wildAnimal
{
    public:

    void hunt()
    {
        cout<<"Can hunt"<<"\n";
    }
};

class domesticAnimal : public wildAnimal
{
    public:

    void hunt()
    {
        cout<<"Cannot hunt\n";
    }
};

int main()
{
    domesticAnimal cow;
    cow.hunt();
    // Although parent class contains method hunt , since even derived class also has it , method will be overridden

    cow.wildAnimal::hunt();
    // This uses function in base class as it is called using scope resolution operator
}