#include <iostream>
using namespace std;

class person
{
    int age;

    public:
    int backlogs;

    void setAge(int age){
        this->age = age;
    }

    int getAge(){
        return this->age;
    }
};

int main()
{
    person charan;
    charan.backlogs = 10;
    cout<<charan.backlogs<<"\n";
    // Prints 10 as backlogs property of class person is public and public class properties can be accessed anywhere

    // charan.age = 20;
    // Default access modifier is private 
    // This will throw an error because age is a private property and cannot be accessed from outside the class

    charan.setAge(20);
    cout<<charan.getAge()<<"\n";
    // This works perfectly becuase even though the property age is private , the methods get and set are public. Those methods are present within class so they can access age property. 

    // We use set and get methods to get values of private properties outside class
}