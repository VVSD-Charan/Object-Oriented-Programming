#include <iostream>
#include <vector>
using namespace std;

class wildAnimal
{
    public:

    void legs(){
        cout<<"Has four legs\n";
    }

    void hunt(){
        cout<<typeid(*this).name()<<" Can hunt\n";
    }
};

class domesticAnimal : public wildAnimal{
    public:

    void hunt(){
        //It gives name of class but not object
        cout<<typeid(*this).name()<<" Cannot hunt\n";
    }
};

class notClassified{

};

int main()
{
    domesticAnimal buffalo;
    buffalo.hunt();
    // We have override the property of wild animal hunt in class domesticAnimal , so this prints "Cannot hunt".To print "Can hunt" i.e to prevent overriding we need to use parentclass::method
    buffalo.wildAnimal::hunt();
    // This avoids ovverriding

    notClassified animal;
    cout<<sizeof(animal)<<"\n";
    // Size of empty class is 1 because in c++ each object must have unique address in memory. To achieve this even empty classes are assigned a minimum size of 1 byte to prevent different instances of empty class having same memory address 

    wildAnimal* cow = new domesticAnimal();
    cow->hunt();
    // Even though pointer type is wildAnimal* , the object cow will be pointed towards domesticAnimal. The hunt method prints "Can hunt" because of runtime polymorphism as it gives output based on type of object.

    // We cannot create an object of wildAnimal with domesticAnimal i.e domesticAnimal* cow = new wildAnimal() is not allowed as we cannot assign a pointer of base class to base pointer of derived class 
}