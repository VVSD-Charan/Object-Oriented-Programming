#include <iostream>
using namespace std;

class cricketer
{
    int age;

    public:

    string about;
    int matches;

    int getAge()
    {
        return this->age;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void details()
    {
        cout<<"Age "<<&age<<"\n";
        cout<<"About "<<&about<<"\n";
        cout<<"Matches "<<&matches<<"\n";
    }
};

int main()
{
    cricketer kohli;
    kohli.setAge(35);
    kohli.about = "Legend";
    kohli.matches = 300;

    cricketer Rohit(kohli);

    cout<<"Updated Rohit ";
    Rohit.details();
    cout<<"\nUpdated Kohli about ";
    kohli.details();

    cout<<"Rohit age "<<Rohit.getAge()<<"\n";
    cout<<"Rohit is "<<Rohit.about<<"\n";
    cout<<"Rohit matches "<<Rohit.matches<<"\n";
    // Default copy constructor gives all data of kohli to rohit . Default copy constructor creates shallow copy in which member wise functions access same memory block and change in data of one will reflext in other too. Although there are some exceptions

    Rohit.matches = 400;
    cout<<"Updated Rohit matches "<<Rohit.matches<<"\n";
    cout<<"Updated Kohli matches "<<kohli.matches<<"\n";

    Rohit.setAge(36);
    cout<<"Updated Rohit age "<<Rohit.getAge()<<"\n";
    cout<<"Updated Kohli age "<<kohli.getAge()<<"\n";

    Rohit.about[0] = 'g';
    cout<<"Updated Rohit ";
    Rohit.details();
    cout<<"\nUpdated Kohli about ";
    kohli.details();
}