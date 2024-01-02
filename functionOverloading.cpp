#include <iostream>
using namespace std;

class human 
{
    public:

    human(){}

    human(int age){
        cout<<"Human is "<<age<<" year"<<(age > 1? "s ":" ")<<"old\n";
    }

    human(int age,string name){
        cout<<name<<" is "<<age<<" year"<<(age > 1? "s ":" ")<<"old\n";
    }
};

int main()
{
    human charan(20);

    human(1,"Charan");
    // Method/Function overloading just matches the function with given parameters.
}