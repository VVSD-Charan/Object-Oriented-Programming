#include <iostream>
using namespace std;

class upsc
{
    public:

    bool history = "true";
    bool reading = "true";
};

class bank
{
    public:

    bool math = "true";
    bool english = "true";
};

class engineer : public upsc,public bank
{
    public:

    bool problem_solving = "true";
};

int main()
{
    engineer charan;

    cout<<"Math "<<(charan.math? "True":"False")<<"\n";
    cout<<"English "<<(charan.english? "True":"False")<<"\n";
    cout<<"Reading "<<(charan.reading? "True":"False")<<"\n";
    cout<<"History "<<(charan.history? "True":"False")<<"\n";
    cout<<"Problem solving "<<(charan.problem_solving? "True":"False")<<"\n";

    // One class inherits two classes in multiple inheritence 
}