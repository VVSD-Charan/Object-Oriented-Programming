#include <iostream>
using namespace std;

class Cricketer
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
        cout << "Age " << &age << "\n";
        cout << "About " << &about << "\n";
        cout << "Matches " << &matches << "\n";
    }
};

int main()
{
    Cricketer kohli;
    kohli.setAge(35);
    kohli.about = "Legend";
    kohli.matches = 300;

    Cricketer Rohit(kohli);

    cout << "Addresses of Rohit ";
    Rohit.details();
    cout << "\nAddresses of Kohli about ";
    kohli.details();

    cout << "Rohit age " << Rohit.getAge() << "\n";
    cout << "Rohit is " << Rohit.about << "\n";
    cout << "Rohit matches " << Rohit.matches << "\n";

    Rohit.matches = 400;
    cout << "Updated Rohit matches " << Rohit.matches << "\n";
    cout << "Updated Kohli matches " << kohli.matches << "\n";

    Rohit.setAge(36);
    cout << "Updated Rohit age " << Rohit.getAge() << "\n";
    cout << "Updated Kohli age " << kohli.getAge() << "\n";

    Rohit.about[0] = 'g';
    cout << "Updated Rohit ";
    Rohit.details();
    cout << "\nUpdated Kohli about ";
    kohli.details();

    return 0;
}
